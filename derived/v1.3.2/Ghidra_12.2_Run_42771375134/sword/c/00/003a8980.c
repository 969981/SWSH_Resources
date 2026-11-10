/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a8980; name: FUN_003a8980
 */


uint FUN_003a8980(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  uint uVar1;
  ulong uVar2;
  undefined *local_90;
  float *local_88;
  undefined8 uStack_80;
  float *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined1 auStack_38 [8];
  
  if ((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x40) == 0) ||
     (uVar2 = FUN_003a2ff0((int *)(param_1 + 0x10),param_2,param_3,param_4,param_5),
     (uVar2 & 1) != 0)) {
    if (*(int *)(param_1 + 0x1edc) == 0) {
      uVar1 = 1;
    }
    else {
      local_50 = (*(float *)(param_2 + 0x54) - *(float *)(param_2 + 0x48)) * 0.5;
      fStack_4c = (*(float *)(param_2 + 0x58) - *(float *)(param_2 + 0x4c)) * 0.5;
      local_48 = (*(float *)(param_2 + 0x5c) - *(float *)(param_2 + 0x50)) * 0.5;
      local_60 = (*(float *)(param_2 + 0x54) + *(float *)(param_2 + 0x48)) * 0.5;
      fStack_5c = (*(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x4c)) * 0.5;
      local_58 = (*(float *)(param_2 + 0x5c) + *(float *)(param_2 + 0x50)) * 0.5;
      local_68 = *(undefined8 *)(param_1 + 0x1ea0);
      local_90 = PTR_DAT_02712730 + 0x10;
      local_88 = &local_60;
      local_78 = &local_50;
                    /* try { // try from 003a8a60 to 003a8a7f has its CatchHandler @ 003a8aac */
      uStack_80 = param_3;
      uStack_70 = param_5;
      uVar1 = FUN_0039cc50(auStack_38,*(undefined8 *)(param_1 + 0x1f10),
                           *(undefined8 *)(param_1 + 0x1f08),*(undefined8 *)(param_1 + 0x1ee0),
                           &local_60,param_3,param_4,&local_50,&local_90);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


