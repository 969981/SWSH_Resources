/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00482990; name: FUN_00482990
 */


void FUN_00482990(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_02712a90;
  plVar3 = *(long **)(param_1 + 0x58);
  if ((plVar3 != (long *)0x0) && ((int)plVar3[1] != 0)) {
    plVar9 = (long *)*plVar3;
    do {
      if (*plVar9 == param_2) {
        lVar8 = plVar9[1];
        if (lVar8 != 0) {
          uVar1 = *(undefined4 *)puVar2;
          FUN_004a6600(lVar8);
          FUN_00404870(uVar1,lVar8);
          plVar3 = *(long **)(param_1 + 0x58);
        }
        uVar5 = *(uint *)(plVar3 + 1);
        plVar4 = (long *)(*plVar3 + (ulong)uVar5 * 0x10 + -0x10);
        if (plVar9 < plVar4) {
          uVar7 = (*plVar3 + ((ulong)uVar5 * 0x10 - (long)plVar9)) - 0x11;
          uVar5 = ((uint)(uVar7 >> 4) & 0xfffffff) + 1;
          plVar6 = plVar9;
          if ((uVar5 & 7) != 0) {
            lVar8 = -((ulong)uVar5 & 7);
            plVar10 = plVar9;
            do {
              plVar6 = plVar10 + 2;
              *plVar10 = *plVar6;
              plVar10[1] = plVar10[3];
              lVar8 = lVar8 + 1;
              plVar10 = plVar6;
            } while (lVar8 != 0);
          }
          if (0x6f < uVar7) {
            do {
              *plVar6 = plVar6[2];
              plVar6[1] = plVar6[3];
              plVar6[2] = plVar6[4];
              plVar6[3] = plVar6[5];
              plVar6[4] = plVar6[6];
              plVar6[5] = plVar6[7];
              plVar6[6] = plVar6[8];
              plVar6[7] = plVar6[9];
              plVar6[8] = plVar6[10];
              plVar6[9] = plVar6[0xb];
              plVar6[10] = plVar6[0xc];
              plVar6[0xb] = plVar6[0xd];
              plVar6[0xc] = plVar6[0xe];
              plVar6[0xd] = plVar6[0xf];
              plVar10 = plVar6 + 0x10;
              plVar6[0xe] = *plVar10;
              plVar6[0xf] = plVar6[0x11];
              plVar6 = plVar10;
            } while (plVar10 < plVar4);
          }
          uVar5 = *(uint *)(plVar3 + 1);
        }
        *(uint *)(plVar3 + 1) = uVar5 - 1;
        plVar3 = *(long **)(param_1 + 0x58);
      }
      else {
        plVar9 = plVar9 + 2;
      }
    } while ((long *)(*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x10) != plVar9);
  }
  return;
}


