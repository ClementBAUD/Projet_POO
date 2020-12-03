CREATE TABLE [dbo].[Date] (
    [Id_Date]     INT IDENTITY (1, 1) NOT NULL,
    [Id_Personne] INT NOT NULL,
    [Num_Client]  INT NOT NULL,
    [Jour]        INT NULL,
    [Mois]        INT NULL,
    [Annee]       INT NULL,
    [JourA]       INT NULL,
    [MoisA]       INT NULL,
    [AnneeA]      INT NULL,
    PRIMARY KEY CLUSTERED ([Id_Date] ASC),
    CONSTRAINT [FK_Date_ToTable] FOREIGN KEY ([Id_Personne]) REFERENCES [dbo].[Personnel] ([Id_Personne]),
    CONSTRAINT [FK_Date_ToTable_1] FOREIGN KEY ([Num_Client]) REFERENCES [dbo].[Client] ([Num_Client])
);

