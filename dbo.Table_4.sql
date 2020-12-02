CREATE TABLE [dbo].[Article] (
    [Id_article]                           INT          NOT NULL,
    [Nom]                          VARCHAR (50) NULL,
    [Référence]                    VARCHAR (50) NULL,
    [Désignation]                  VARCHAR (50) NULL,
    [Quantité en stock]            INT NULL,
    [Seuil de réaprovisionnement ] INT NULL,
    [Quantité]                     INT NULL,
    [Prix]                         INT NULL,
    [Prix HT]                      INT NULL,
    [Taux TVA]                     INT          NULL,
    CONSTRAINT [PK_Article] PRIMARY KEY CLUSTERED ([Id_article] ASC)
);
