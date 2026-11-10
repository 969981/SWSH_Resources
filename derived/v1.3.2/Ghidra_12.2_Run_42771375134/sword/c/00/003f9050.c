/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f9050; name: FUN_003f9050
 */


void FUN_003f9050(long *param_1,long param_2,long param_3,ushort *param_4,long param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  float fVar9;
  
  FUN_003c6e00(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10),0,0xb);
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = -1;
  puVar2 = PTR_DAT_027129a0;
  param_1[9] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 100) = 0;
  *(uint *)(param_1 + 8) = *param_4 & 0x7fff;
  lVar8 = *(long *)(param_1[1] + 0x48);
                    /* try { // try from 003f90d4 to 003f90df has its CatchHandler @ 003f9278 */
  lVar5 = FUN_003fc7b0(param_2);
                    /* try { // try from 003f90e4 to 003f91b7 has its CatchHandler @ 003f9280 */
  lVar6 = FUN_003fc7b0(param_1[6]);
  uVar1 = *param_4;
  if ((*(byte *)(*(long *)(lVar5 + 0x50) + 0x2c) & 1) == 0) {
    if ((uVar1 & 1) == 0) {
LAB_003f9130:
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000;
      goto joined_r0x003f9128;
    }
  }
  else if (((lVar6 == 0) || ((uVar1 & 1) == 0)) ||
          ((*(byte *)(*(long *)(lVar6 + 0x50) + 0x2c) & 1) != 0)) goto LAB_003f9130;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffbffff;
joined_r0x003f9128:
  if ((((uVar1 & 0x202) == 0) && (fVar9 = (float)FUN_003e6620(lVar8,7), fVar9 == 0.0)) &&
     ((fVar9 = (float)FUN_003e6620(lVar8,8), fVar9 == 0.0 &&
      ((fVar9 = (float)FUN_003e6620(lVar8,9), fVar9 == 0.0 &&
       (fVar9 = (float)FUN_003e6620(lVar8,10), fVar9 == 0.0)))))) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffdffff;
  }
  else {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20000;
  }
  if (param_5 == 0) {
    uVar3 = *(undefined4 *)(lVar5 + 0xb0);
    *(int *)(*(long *)(lVar5 + 0x88) + 0x94) = *(int *)(*(long *)(lVar5 + 0x88) + 0x94) + 1;
    if (lVar6 == 0) {
      uVar7 = 0xffffffc0;
    }
    else {
      uVar7 = *(undefined4 *)(lVar6 + 0xb0);
      *(int *)(*(long *)(lVar6 + 0x88) + 0x94) = *(int *)(*(long *)(lVar6 + 0x88) + 0x94) + 1;
    }
                    /* try { // try from 003f9204 to 003f920f has its CatchHandler @ 003f9274 */
    uVar3 = FUN_001137f0(*(undefined8 *)(lVar8 + 0x748),0,uVar3,uVar7,param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
                    /* try { // try from 003f921c to 003f925f has its CatchHandler @ 003f927c */
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0);
    FUN_003ba4b0(param_1[1],param_1);
    FUN_003ba4b0(param_1[2],param_1);
    FUN_003cd660(*(undefined8 *)(lVar8 + 0x1048),param_1);
    FUN_003dd8f0(lVar8,param_1,uVar4 & 1);
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,param_5);
  }
  return;
}


