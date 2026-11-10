/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060fd60; name: FUN_0060fd60
 */


void FUN_0060fd60(int param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_3 + (long)param_4 * 0x198 + 400);
    puVar5 = (undefined8 *)(param_2 + 0x28);
    do {
      piVar3 = (int *)*puVar5;
      if (piVar3 != (int *)0x0) {
        if ((*(uint *)((long)puVar5 + -0xc) >> 9 & 1) == 0) {
          if ((*(uint *)((long)puVar5 + -0xc) >> 10 & 1) == 0) {
            lVar2 = puVar5[1] - (long)*piVar3;
            if (lVar2 < 1) {
              lVar6 = *(long *)(piVar3 + 2);
              lVar2 = FUN_00602580(lVar2,uVar4);
            }
            else {
              lVar6 = *(long *)(piVar3 + 2);
              lVar1 = *(long *)(piVar3 + 4);
              if (piVar3[1] <= lVar2) {
                lVar2 = FUN_00602580(lVar2 - piVar3[1],uVar4);
                lVar2 = lVar1 + lVar6 + lVar2;
                goto LAB_0060fe04;
              }
              lVar2 = FUN_006024c0();
            }
            lVar2 = lVar2 + lVar6;
          }
          else {
            lVar2 = *(long *)(piVar3 + 4) + *(long *)(piVar3 + 2);
          }
        }
        else {
          lVar2 = *(long *)(piVar3 + 2);
        }
LAB_0060fe04:
        puVar5[3] = lVar2;
        *(uint *)((long)puVar5 + -0xc) = *(uint *)((long)puVar5 + -0xc) | 0x20;
      }
      param_1 = param_1 + -1;
      puVar5 = puVar5 + 9;
    } while (param_1 != 0);
  }
  return;
}


