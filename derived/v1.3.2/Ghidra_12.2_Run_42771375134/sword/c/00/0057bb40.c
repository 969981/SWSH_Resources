/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057bb40; name: FUN_0057bb40
 */


/* WARNING: Removing unreachable block (ram,0x0057bee4) */
/* WARNING: Removing unreachable block (ram,0x0057bd18) */

undefined1  [16] FUN_0057bb40(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  
  fVar6 = (float)param_1;
  uVar2 = param_4;
  if (((param_4 < 0x10) && ((1 << (ulong)(param_4 & 0x1f) & 0xfbfcU) != 0)) &&
     (FUN_005706c0(param_1,param_2), param_4 < 0x10)) {
    uVar1 = 1 << (ulong)(param_4 & 0x1f);
    if ((uVar1 & 0xb828) == 0) {
      if ((uVar1 & 0x280) == 0) goto LAB_0057bc30;
      if ((param_4 | 1) == 0xd) {
        uVar2 = 2;
        if ((param_4 & 0xfffffffe) != 0xc) {
          uVar2 = param_4;
        }
      }
      else if (param_4 == 7) {
        uVar2 = 6;
      }
      else if (param_4 == 9) {
        uVar2 = 8;
      }
      goto LAB_0057bcb8;
    }
    if ((param_4 | 1) == 0xd) {
      uVar2 = 2;
      if ((param_4 & 0xfffffffe) != 0xc) {
        uVar2 = param_4;
      }
      goto joined_r0x0057bf20;
    }
    if (0xf < param_4) goto joined_r0x0057bf20;
    uVar1 = 1 << (ulong)(param_4 & 0x1f);
    if ((uVar1 & 0xb828) != 0) goto LAB_0057bd28;
    if ((uVar1 & 0x280) == 0) goto joined_r0x0057bf20;
  }
  else {
LAB_0057bc30:
    if ((param_4 | 1) == 0xd) {
      uVar2 = 2;
      if ((param_4 & 0xfffffffe) != 0xc) {
        uVar2 = param_4;
      }
    }
    else {
      uVar1 = param_4 - 3 >> 1;
      if ((uVar1 | (param_4 - 3) * -0x80000000) < 7) {
        uVar1 = 1 << (ulong)(uVar1 & 0x1f);
        if ((uVar1 & 0x43) != 0) goto LAB_0057bd28;
        if ((uVar1 & 0xc) != 0) goto LAB_0057bcec;
      }
    }
    if ((param_4 != 8) && (param_4 != 6)) goto joined_r0x0057bf20;
LAB_0057bcb8:
    fVar3 = fVar6 / (float)param_2;
    if ((fVar3 < DAT_01d4be58) || (DAT_01d4bbec < fVar3)) {
      fVar4 = DAT_01d4be58;
      if (DAT_01d4be58 <= fVar3) {
        fVar4 = fVar3;
      }
      param_2 = (ulong)(uint)(fVar6 / fVar4);
    }
joined_r0x0057bf20:
    if ((uVar2 != 8) && (uVar2 != 6)) goto LAB_0057bd28;
  }
LAB_0057bcec:
  fVar3 = fVar6 / (float)param_2;
  if ((fVar3 < DAT_01d4be58) || (DAT_01d4bbec < fVar3)) {
    fVar4 = DAT_01d4be58;
    if (DAT_01d4be58 <= fVar3) {
      fVar4 = fVar3;
    }
    param_2 = (ulong)(uint)(fVar6 / fVar4);
  }
LAB_0057bd28:
  fVar6 = fVar6 / (float)param_2;
  if ((fVar6 < DAT_01d4c65c) || (DAT_01d4c4ac < fVar6)) {
    expf(-fVar6);
  }
  if (param_4 - 2 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x0057bd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar5 = (*(code *)(&DAT_01d6c5e4 + *(int *)(&DAT_01d6c5e4 + (ulong)(param_4 - 2) * 4)))
                       (1.0 / (float)param_2);
    return auVar5;
  }
  return ZEXT816(0);
}


