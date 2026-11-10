/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009487f0; name: FUN_009487f0
 */


void FUN_009487f0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [16];
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined6 uStack_70;
  undefined1 uStack_6a;
  undefined4 local_68;
  undefined1 auStack_64 [36];
  
  *param_2 = 0;
  uVar3 = FUN_008e28f0(*param_3,*(undefined4 *)(param_3 + 1));
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_009423b0(param_1);
    FUN_00937630(uVar4,*param_3,*(undefined4 *)(param_3 + 1));
    uVar3 = FUN_008e1810(*param_3,0x1b);
    if ((uVar3 & 1) != 0) {
      uVar4 = *param_3;
      local_90[0] = 0x1f;
      local_8c = 0x2d;
      local_68 = 0;
      uStack_70 = 0;
      uStack_6a = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_71 = 0;
      local_88 = 0;
      FUN_00943e60(auStack_64);
      local_90[0] = FUN_008e0a00(uVar4);
      local_8c = 0x1b;
      uVar1 = FUN_008e0a00(uVar4);
      local_88 = CONCAT71(local_88._1_7_,uVar1);
      uStack_6a = 1;
      local_68 = CONCAT13(1,(undefined3)local_68);
      FUN_00942450(param_1);
      uVar4 = FUN_00925570();
      FUN_00948290(uVar4,auStack_a0,local_90);
    }
    uVar2 = FUN_008e0a00(*param_3);
    uVar4 = FUN_009423b0(param_1);
    FUN_0093a080(uVar4,uVar2,0);
    if (*(char *)((long)param_3 + 0xc) == '\0') {
      uVar4 = FUN_00942420(param_1);
      FUN_00946170(uVar4,uVar2);
    }
    *param_2 = 1;
  }
  return;
}


