/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb6200; name: FUN_00eb6200
 */


void FUN_00eb6200(undefined8 *param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)*param_1;
  puVar2 = (undefined8 *)plVar5[2];
  uVar3 = *(uint *)plVar5[1];
  lVar4 = *plVar5;
  *(uint *)plVar5[1] = uVar3 + 1;
  if (uVar3 < 0x12) {
    lVar1 = lVar4 + (long)(int)uVar3 * 0x10;
    *(undefined8 *)(lVar1 + 0x7d8) = puVar2[1];
    *(undefined8 *)(lVar1 + 2000) = *puVar2;
    if (param_3 < 10) {
      lVar1 = plVar5[2];
      uVar3 = *(uint *)plVar5[1];
      *(uint *)plVar5[1] = uVar3 + 1;
      if (uVar3 < 0x12) {
        puVar2 = (undefined8 *)(lVar1 + (long)(int)param_3 * 0x10);
        lVar1 = (long)(int)param_3 + 1;
        lVar6 = lVar4 + (long)(int)uVar3 * 0x10;
        *(undefined8 *)(lVar6 + 0x7d8) = puVar2[1];
        *(undefined8 *)(lVar6 + 2000) = *puVar2;
        if ((uint)lVar1 < 10) {
          lVar6 = plVar5[2];
          uVar3 = *(uint *)plVar5[1];
          *(uint *)plVar5[1] = uVar3 + 1;
          if (uVar3 < 0x12) {
            puVar2 = (undefined8 *)(lVar6 + lVar1 * 0x10);
            lVar4 = lVar4 + (long)(int)uVar3 * 0x10;
            *(undefined8 *)(lVar4 + 0x7d8) = puVar2[1];
            *(undefined8 *)(lVar4 + 2000) = *puVar2;
            plVar5 = (long *)*param_1;
            puVar2 = (undefined8 *)plVar5[2];
            uVar3 = *(uint *)plVar5[1];
            lVar4 = *plVar5;
            *(uint *)plVar5[1] = uVar3 + 1;
            if (uVar3 < 0x12) {
              lVar1 = lVar4 + (long)(int)uVar3 * 0x10;
              *(undefined8 *)(lVar1 + 0x7d8) = puVar2[1];
              *(undefined8 *)(lVar1 + 2000) = *puVar2;
              if (param_2 < 10) {
                lVar1 = plVar5[2];
                uVar3 = *(uint *)plVar5[1];
                *(uint *)plVar5[1] = uVar3 + 1;
                if (uVar3 < 0x12) {
                  puVar2 = (undefined8 *)(lVar1 + (long)(int)param_2 * 0x10);
                  lVar6 = (long)(int)param_2 + -1;
                  lVar1 = lVar4 + (long)(int)uVar3 * 0x10;
                  *(undefined8 *)(lVar1 + 0x7d8) = puVar2[1];
                  *(undefined8 *)(lVar1 + 2000) = *puVar2;
                  if ((uint)lVar6 < 10) {
                    lVar1 = plVar5[2];
                    uVar3 = *(uint *)plVar5[1];
                    *(uint *)plVar5[1] = uVar3 + 1;
                    if (uVar3 < 0x12) {
                      puVar2 = (undefined8 *)(lVar1 + lVar6 * 0x10);
                      lVar4 = lVar4 + (long)(int)uVar3 * 0x10;
                      *(undefined8 *)(lVar4 + 0x7d8) = puVar2[1];
                      *(undefined8 *)(lVar4 + 2000) = *puVar2;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


