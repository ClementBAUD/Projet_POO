CREATE TABLE [dbo].[Client] (
    [Num_Client] INT          IDENTITY (1, 1) NOT NULL,
    [Prenom]     VARCHAR (50) NULL,
    [Nom]        VARCHAR (50) NULL,
    PRIMARY KEY CLUSTERED ([Num_Client] ASC)
);

