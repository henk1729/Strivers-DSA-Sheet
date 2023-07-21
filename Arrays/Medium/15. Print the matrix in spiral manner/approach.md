`<Implementation>`
### Traversal approach { O(N*N) }:
1. set vars limiting the rows and columns already traversed- topLim, rgtLim, btmLim, lftLim
2. traverse row l->r, topLim++
3. traverse col t->b, rgtLim--
4. traverse row r->l, btmLim--
5. traverse col b->t, lftLim++
6. do while topLim <= btmLim and lftlim <= rgtLim
7. double-check conditions for step 4 and 5
