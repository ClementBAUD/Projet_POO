CREATE TABLE [dbo].[Commande] (
    [Id]                INT          NOT NULL,
    [ID Client]         VARCHAR (50) NULL,
    [Référence]         VARCHAR (50) NULL,
    [Date de commande ] NCHAR (10)   NULL,
    [Date de livraison] DATE         NULL,
    [N_Incrémentiel]    NUMERIC (18) NULL,
    PRIMARY KEY CLUSTERED ([Id] ASC)
);

