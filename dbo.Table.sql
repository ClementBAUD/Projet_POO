CREATE TABLE [dbo].[Personnel] (
    [Id_Personne]            INT        IDENTITY (1, 1) NOT NULL,
    [Prenom]                 VARCHAR(50) NULL,
    [Nom]                    VARCHAR(50) NULL,
    [Superieur_Hierarchique] VARCHAR(50) NULL,
    PRIMARY KEY CLUSTERED ([Id_Personne] ASC)
);