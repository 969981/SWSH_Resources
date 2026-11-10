/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d9290; name: FUN_001d9290
 */


void FUN_001d9290(long *param_1,byte param_2,byte param_3)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  plVar6 = param_1 + 3;
  lVar4 = FUN_001cc920(*plVar6);
  fVar8 = *(float *)(lVar4 + 0x2220);
  fVar9 = *(float *)(param_1 + 0xb);
  bVar3 = (**(code **)(*param_1 + 0x88))(param_1);
  fVar2 = fVar8;
  if ((fVar9 < fVar8 & param_3) == 0) {
    fVar2 = fVar9;
  }
  if (((fVar9 < fVar8 & param_3) != 0) || (((param_2 | param_3) & bVar3 & 1) != 0)) {
    if ((int)param_1[0x12] != 0) {
      uVar7 = 0;
      do {
        lVar4 = *(long *)(param_1[0x11] + uVar7 * 8);
        uVar1 = *(uint *)(lVar4 + 0x68) >> 0x1e;
        if (uVar1 == 2) {
          lVar5 = *(long *)(lVar4 + 0x60);
          if (*(char *)(lVar5 + 0x1fb9) == '\0') goto LAB_001d9364;
LAB_001d9348:
          *(undefined4 *)(lVar4 + 0x178) = 0;
          *(float *)(lVar4 + 0x174) = fVar2;
          FUN_001d1850(lVar5);
          *(uint *)(lVar4 + 0x17c) =
               *(uint *)(lVar4 + 0x17c) & 0xf8000000 |
               *(uint *)(lVar4 + 0x17c) & 0xffffff | 0x5000000;
        }
        else {
          if (uVar1 == 3) {
            lVar5 = *(long *)(lVar4 + 0x60);
            goto LAB_001d9348;
          }
LAB_001d9364:
          *(undefined4 *)(lVar4 + 0x178) = 0;
          *(float *)(lVar4 + 0x174) = fVar2;
          FUN_003be770(fVar2,lVar4 + 0x80,1);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x12));
    }
    *(float *)(param_1 + 0xb) = fVar2;
    *(undefined1 *)((long)param_1 + 0x5c) = 0;
    if (*(uint *)(param_1 + 4) >> 0x1e == 2) {
      lVar4 = *plVar6;
      if (*(char *)(lVar4 + 0x1fb9) == '\0') goto LAB_001d93f4;
    }
    else {
      if (*(uint *)(param_1 + 4) >> 0x1e != 3) {
LAB_001d93f4:
        FUN_003baa10(fVar2,param_1 + 6);
        return;
      }
      lVar4 = *plVar6;
    }
    FUN_001d1850(lVar4,plVar6);
    *(uint *)(param_1 + 4) =
         *(uint *)(param_1 + 4) & 0xfffffc00 | *(uint *)(param_1 + 4) & 0x7f | 0x280;
  }
  return;
}


