/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00486380; name: FUN_00486380
 */


void FUN_00486380(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  byte *pbVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 == 0) {
    plVar3 = (long *)(param_1 + 0x50);
    lVar7 = *plVar3;
    if ((lVar7 != 0) && (pbVar4 = *(byte **)(lVar7 + 0x18), pbVar4 != (byte *)0x0)) {
      uVar6 = 0;
      pfVar5 = (float *)(pbVar4 + ((ulong)(*pbVar4 + 4) & 0x1fc));
      do {
        if (pbVar4[uVar6 + 1] == 0xb) {
          if (pfVar5 == (float *)0x0) {
            return;
          }
          if ((*pfVar5 == 1.0) && (*(long *)(pfVar5 + 2) == 0)) {
            return;
          }
          param_1 = FUN_00499400(*(undefined8 *)PTR_DAT_02712d20,param_1);
          lVar7 = *plVar3;
          goto joined_r0x00486498;
        }
        uVar6 = uVar6 + 1;
        pfVar5 = pfVar5 + 4;
      } while (uVar6 < *pbVar4);
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 != (long *)0x0) {
      plVar2 = (long *)*plVar3;
      uVar1 = *(uint *)(plVar3 + 1);
      plVar3 = plVar2;
      if (uVar1 == 0) {
LAB_00486430:
        if (plVar3 != plVar2 + (ulong)uVar1 * 2) {
          lVar7 = plVar3[1];
joined_r0x00486498:
          if (lVar7 != 0) {
            FUN_004834c0(0x3f800000,param_1,lVar7,param_3,param_4);
            return;
          }
        }
      }
      else {
        lVar7 = (ulong)uVar1 << 4;
        do {
          if (*plVar3 == param_2) goto LAB_00486430;
          lVar7 = lVar7 + -0x10;
          plVar3 = plVar3 + 2;
        } while (lVar7 != 0);
      }
    }
  }
  return;
}


