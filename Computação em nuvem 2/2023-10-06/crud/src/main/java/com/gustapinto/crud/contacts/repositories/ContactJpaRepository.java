package com.gustapinto.crud.contacts.repositories;

import java.util.UUID;

import org.springframework.data.jpa.repository.JpaRepository;

import com.gustapinto.crud.contacts.domain.entities.Contact;

public interface ContactJpaRepository extends JpaRepository<Contact, UUID> {
}
