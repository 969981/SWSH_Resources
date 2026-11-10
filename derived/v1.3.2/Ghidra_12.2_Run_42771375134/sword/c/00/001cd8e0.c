/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cd8e0; name: FUN_001cd8e0
 */


void FUN_001cd8e0(long param_1,long *param_2,uint param_3,ulong param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_258 [512];
  undefined1 local_58;
  undefined1 *local_50;
  ulong local_48;
  long local_38;
  
  if ((param_4 & 1) != 0) {
    FUN_001cdfb0(param_1,param_2,param_1 + 0x2088);
    pbVar1 = (byte *)((long)param_2 + 0x4c);
    if ((*(uint *)((long)param_2 + 0x11c) & 0x4000) != 0) {
      pbVar1 = (byte *)(param_2[2] + 0x14c);
    }
    if ((*pbVar1 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x23) = 1;
      *(uint *)((long)param_2 + 0x11c) = *(uint *)((long)param_2 + 0x11c) & 0xfff0ffff;
    }
    else {
      FUN_001d5f80(param_2);
    }
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xffffffdf;
    return;
  }
  if ((*(uint *)(param_2 + 1) >> 0x1e == 1) && (param_2[0x1a] != 0)) {
    plVar7 = param_2 + 4;
    uVar5 = FUN_003be9f0(plVar7,1);
    if ((uVar5 & 1) == 0) {
      if (((param_2[0x1a] == 0) || (uVar5 = FUN_003be9f0(plVar7,0), (uVar5 & 1) == 0)) ||
         (param_2[0x1a] == 0)) goto LAB_001cd9e0;
      uVar8 = *(undefined8 *)(*param_2 + 0x1178);
      uVar9 = 0;
    }
    else {
      if (param_2[0x1a] == 0) goto LAB_001cd9e0;
      uVar8 = *(undefined8 *)(*param_2 + 0x1178);
      uVar9 = 1;
    }
    FUN_003be5f0(plVar7,uVar8,uVar9);
  }
LAB_001cd9e0:
  FUN_001cdba0(param_1,param_2,param_1 + 0x2088,param_3 & 1);
  pbVar1 = (byte *)((long)param_2 + 0x4c);
  if ((*(uint *)((long)param_2 + 0x11c) & 0x4000) != 0) {
    pbVar1 = (byte *)(param_2[2] + 0x14c);
  }
  if ((*pbVar1 & 1) == 0) {
    *(undefined4 *)(param_2 + 0x23) = 1;
    *(uint *)((long)param_2 + 0x11c) = *(uint *)((long)param_2 + 0x11c) & 0xfff0ffff;
  }
  else {
    FUN_001d5f80(param_2);
  }
  uVar4 = *(uint *)(param_2 + 1);
  *(uint *)(param_2 + 1) = uVar4 & 0xffffffdf;
  if (*(char *)(param_1 + 0x1fb9) != '\0') {
    if ((param_3 & 1) != 0) {
      *(uint *)(param_2 + 1) = uVar4 & 0xffffffdf | 0x10;
    }
    local_48 = 0x4000000000;
    local_50 = auStack_258;
    local_58 = 1;
                    /* try { // try from 001cda70 to 001cda77 has its CatchHandler @ 001cdb48 */
    lVar6 = FUN_00206d30();
                    /* try { // try from 001cda78 to 001cda83 has its CatchHandler @ 001cdb38 */
    uVar4 = FUN_001f0560(param_2,&local_38);
    puVar3 = local_50;
    if (uVar4 != 0) {
      uVar2 = *(uint *)(param_2 + 1);
      lVar10 = *param_2;
      uVar5 = 0;
      do {
        plVar7 = (long *)(*(long *)(local_38 + uVar5 * 8) + lVar6 + -0x20);
        if ((*(uint *)(plVar7 + 1) & 0xf000000) == 0x1000000) {
          *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) & 0x3fffffff | uVar2 & 0xc0000000;
          *plVar7 = lVar10;
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
    if (((-1 < (long)local_48) && ((local_48 & 0x7fffffff00000000) != 0)) &&
       ((auStack_258 != local_50 && (local_50 != (undefined1 *)0x0)))) {
                    /* try { // try from 001cdb00 to 001cdb13 has its CatchHandler @ 001cdb34 */
      plVar7 = (long *)FUN_00400d30();
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar3);
    }
  }
  return;
}


