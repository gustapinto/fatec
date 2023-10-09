package com.gustapinto.crud.contacts.controllers;

import java.util.List;
import java.util.Optional;
import java.util.UUID;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.gustapinto.crud.contacts.domain.entities.Contact;
import com.gustapinto.crud.contacts.repositories.ContactJpaRepository;

import jakarta.validation.Valid;

@RestController
@RequestMapping("/api/contacts")
public class ContactController {
    @Autowired
    private ContactJpaRepository contactRepository;

    @GetMapping
    public ResponseEntity<List<Contact>> findAllContacts() {
        List<Contact> contacts = this.contactRepository.findAll();

        return ResponseEntity.ok(contacts);
    }

    @GetMapping("/{contactId}")
    public ResponseEntity<Contact> findContactById(@PathVariable UUID contactId) {
        Optional<Contact> maybeContact = this.contactRepository.findById(contactId);

        if (maybeContact.isEmpty()) {
            return ResponseEntity.notFound().build();
        }

        return ResponseEntity.ok(maybeContact.get());
    }

    @PostMapping
    public ResponseEntity<Contact> createContact(@Valid @RequestBody Contact contactBody) {
        contactBody.setId(null); // Garante que o contato sempre será novo

        Contact newContact = this.contactRepository.save(contactBody);

        return new ResponseEntity<>(newContact, HttpStatus.CREATED);
    }

    @PutMapping("/{contactId}")
    public ResponseEntity<Contact> updateContactById(@Valid @PathVariable UUID contactId,
            @RequestBody Contact contactBody) {
        boolean contactExists = this.contactRepository.existsById(contactId);

        if (!contactExists) {
            return ResponseEntity.notFound().build();
        }

        contactBody.setId(contactId);

        Contact updatedContact = this.contactRepository.save(contactBody);

        return ResponseEntity.ok(updatedContact);
    }

    @DeleteMapping("/{contactId}")
    public ResponseEntity<?> deleteContactById(@PathVariable UUID contactId) {
        boolean contactExists = this.contactRepository.existsById(contactId);

        if (!contactExists) {
            return ResponseEntity.notFound().build();
        }

        this.contactRepository.deleteById(contactId);

        return ResponseEntity.noContent().build();
    }
}
