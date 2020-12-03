CREATE TABLE [dbo].[Commande_Article] (
    [Id]          INT NOT NULL,
    [Id_Article]  INT NULL,
    [Id_Commande] INT NULL,
    [Quantité]    INT NULL,
    PRIMARY KEY CLUSTERED ([Id] ASC),
    CONSTRAINT [FK_Commande_Article_Article] FOREIGN KEY ([Id_Article]) REFERENCES [dbo].[Article] ([Id_article]),
    CONSTRAINT [FK_Commande_Article_Commande] FOREIGN KEY ([Id_Commande]) REFERENCES [dbo].[Commande] ([Id])
);

