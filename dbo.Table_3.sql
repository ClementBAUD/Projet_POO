CREATE TABLE [dbo].[Adresse] (
    [Id_Adresse]  INT        IDENTITY (1, 1) NOT NULL,
    [Id_Personne] INT        NOT NULL,
    [Num_Client]  INT        NOT NULL,
    [Adresse]     VARCHAR (50) NULL,
    [Ville]       VARCHAR (30) NULL,
    [CP]          INT        NULL,
    PRIMARY KEY CLUSTERED ([Id_Adresse] ASC),
    CONSTRAINT [FK_Adresse_ToTable] FOREIGN KEY ([Id_Personne]) REFERENCES [dbo].[Personnel] ([Id_Personne]),
    CONSTRAINT [FK_Adresse_ToTable_1] FOREIGN KEY ([Num_Client]) REFERENCES [dbo].[Client] ([Num_Client])
);