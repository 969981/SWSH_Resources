/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00204cd0; name: FUN_00204cd0
 */


void FUN_00204cd0(long *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long *plVar7;
  long lVar6;
  undefined4 uVar8;
  undefined1 local_28 [8];
  
  *(undefined4 *)(param_1 + 1) = 0x30008;
  param_1[2] = 0;
  puVar3 = PTR_DAT_02711220;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[3] = (long)(puVar3 + 0x168);
  local_28[0] = *param_3;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
                    /* try { // try from 00204d34 to 00204d3f has its CatchHandler @ 00204e08 */
  FUN_003f8820(param_1 + 10,param_2,local_28);
  uVar1 = *(uint *)(param_1 + 7);
  bVar4 = (param_6 & 1) == 0;
  uVar5 = 0x1000000;
  if (bVar4) {
    uVar5 = 0x2000000;
  }
  *(uint *)(param_1 + 7) = uVar1 & 0xf0ffffff | uVar5;
  plVar7 = param_1 + 0x13;
  iVar2 = (int)*plVar7;
  uVar8 = 0x80000000;
  if (bVar4) {
    uVar8 = 0;
  }
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = uVar8;
  param_1[2] = 0;
  if (iVar2 == 6) {
    if ((uVar1 & 1) != 0) {
      plVar7 = (long *)(param_1[8] + 0x38);
    }
    lVar6 = plVar7[1];
  }
  else if (iVar2 == 5) {
    if ((uVar1 & 1) != 0) {
      plVar7 = (long *)(param_1[8] + 0x38);
    }
    lVar6 = plVar7[5];
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    if ((uVar1 & 1) != 0) {
      plVar7 = (long *)(param_1[8] + 0x38);
    }
    lVar6 = plVar7[4];
  }
  if (lVar6 != 0) {
                    /* try { // try from 00204de0 to 00204de3 has its CatchHandler @ 00204df4 */
    FUN_003ff470(lVar6 + 0x18);
  }
  return;
}


