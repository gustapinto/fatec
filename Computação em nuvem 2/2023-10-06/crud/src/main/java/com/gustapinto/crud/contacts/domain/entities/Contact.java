package com.gustapinto.crud.contacts.domain.entities;

import java.util.UUID;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.validation.constraints.Email;
import jakarta.validation.constraints.Max;
import jakarta.validation.constraints.NotBlank;
import lombok.Data;

@Data
@Entity
public class Contact {
    @Id
    @GeneratedValue(strategy = GenerationType.UUID)
    private UUID id;

    @NotBlank(message = "O campo firstName não pode ser vazio")
    private String firstName;

    @NotBlank(message = "O campo lastName não pode ser vazio")
    private String lastName;

    @NotBlank(message = "O campo email não pode ser vazio")
    @Email(message = "O campo email deve ser um e-mail válido no formato foo@bar.com")
    private String email;

    @Max(99999999)
    private Integer phoneNumber;
}
