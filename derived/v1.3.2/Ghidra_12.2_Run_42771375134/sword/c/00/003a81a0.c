/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a81a0; name: FUN_003a81a0
 */


uint FUN_003a81a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_38 [8];
  
  if ((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x40) == 0) ||
     (uVar2 = FUN_003a2480((int *)(param_1 + 0x10),param_2,param_3,param_4,param_5),
     (uVar2 & 1) != 0)) {
    if (*(int *)(param_1 + 0x1edc) == 0) {
      uVar1 = 1;
    }
    else {
      local_50 = 0;
      local_48 = 0;
      uStack_58 = *(undefined8 *)(param_1 + 0x1ea0);
      local_80 = PTR_DAT_02712708 + 0x10;
      puStack_68 = &local_50;
                    /* try { // try from 003a8230 to 003a824f has its CatchHandler @ 003a827c */
      uStack_78 = param_2;
      local_70 = param_3;
      local_60 = param_5;
      uVar1 = FUN_0039d360(auStack_38,*(undefined8 *)(param_1 + 0x1f10),
                           *(undefined8 *)(param_1 + 0x1f08),*(undefined8 *)(param_1 + 0x1ee0),
                           param_2,param_3,param_4,&local_50,&local_80);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


