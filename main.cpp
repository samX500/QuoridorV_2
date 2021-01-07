#include <iostream>
/*

 UI:
    - CMD
    - GUI
    - API?
        - GET url/board
        - POST url/play/move
        - POST url/play/wall
            (id, x, y, type)
                applicationService.putWall(id, x, y, type)
                    Board b = getBoardById(id)
                    b.putWall(x, y, type)

 Quoridor:
    - Use cases (actions que tu peux faire avec le software)
    - Orchestrate domain
        - player.moveTo(x, y);

 Domain:
    - Player
    - Board
    - Wall
    - Rules to validate stuff
        - Throw exception otherwise

 * */

/*

 Assurance

 UI
    - Web
    - App android
    - Par pigeon voyageur
    - app desktop
        if (button clicked)
            application.createStuff(field.getContent())
    - API
        POST /reclammation {client-id: 123, montant: 3433}
        applicationService.createReclammation(123, 3433)
    papa interface:
        input
        draw
        drawingTablet?
    - CMD: papa interface
        input, draw
    - GUI: papa interface
        update() -> input
        draw()

 Quoridor
    ReclammationService
    - Faire une reclammation
    - Payer une facture
    PolicyService
    - Changer police d'assurance

 Domain
    - Client
    - Argent
    - Regles d'affaires (si tu as telle police, alors tu peux reclammer tant)
    - interface Repository
        save(User)
        get(id)

 Infrastructure
    UserRepoSQL : public UserRepository
        SELECT * FROM Users where id = 123
        | name | id | age | cash | pere |
    serveur de courriel

 UserRepository *ur = new UserRepoSQL
 new ApplicationService(ur)
 ApplicationService(){
    this->ur = new SQL()
 }

 SOLID
    SRP: Single responsibility
    OCP: Open-closed
    LSP: Liskov substitution
    ISP: Interface segregation
    DIP: Dependency inversion

 A -> B -> Interface <- C
                     <- D
                     <- E
                     <- F
                     ...
                     <- Z

 */

int main() {

    return 0;
}