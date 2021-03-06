#ifndef ECRAN_H
#define ECRAN_H

/////////////////////////////////////////////////
// Headers
/////////////////////////////////////////////////
#include <SFML/Graphics.hpp>

namespace app
{

class Application;

/////////////////////////////////////////////////
/// \brief La classe virtuelle communues aux �crans.
///
/////////////////////////////////////////////////
class Ecran
{
public:

    /////////////////////////////////////////////////
    /// \brief Constructeur
    ///
    /////////////////////////////////////////////////
    Ecran( Application*  appli );

    /////////////////////////////////////////////////
    /// \brief Destructeur virtuel
    ///
    /////////////////////////////////////////////////
    virtual ~Ecran();

    /////////////////////////////////////////////////
    /// \brief G�re les entr�es claviers, souris, fenetre ...
    ///
    /////////////////////////////////////////////////
    virtual     void traiter_evenements ( const sf::Event& event ) =0;

    /////////////////////////////////////////////////
    /// \brief Actualiser les �l�ments.
    ///
    /// Actualiser les diff�rents �l�ments du ou des �crans actifs.
    ///
    /// \param deltaT          Un \e float qui indique le delta du temps �coul� depuis la derni�re actualisation.
    /// \return Rien
    ///
    /////////////////////////////////////////////////
    virtual     void actualiser ( float deltaT ) =0;

    /////////////////////////////////////////////////
    /// \brief Rendre les �l�ments.
    ///
    /// \param Dessiner les diff�rents �l�ments du ou des �crans actifs.
    /// \return Rien
    ///
    /////////////////////////////////////////////////
    virtual     void dessiner  ( ) =0;

protected:

    /////////////////////////////////////////////////
    // Les membres
    /////////////////////////////////////////////////
    Application*    m_appli; ///< La classe Apllication parent.

}; // fin Ecran
}; // fin app
#endif // ECRAN_H



////////////////////////////////////////////////////////////
/// \class app::Ecran
/// \ingroup application
///
/// app::Ecran la classe de base des �crans.
/// Les �crans peuvent se superposer (par exemple l'�cran pause-option avec en dessous l'�cran
/// jeu en pause).
///
/// \see app::EcranPrincipal
///
////////////////////////////////////////////////////////////
