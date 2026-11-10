/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ac500; name: FUN_009ac500
 */


void FUN_009ac500(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  int local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined1 local_70;
  undefined2 local_6f;
  undefined4 local_68 [2];
  undefined8 *local_60;
  undefined1 local_58;
  undefined4 local_54;
  
  iVar1 = FUN_00942620();
  if (iVar1 == 2) {
    uVar2 = FUN_009424b0(param_1,4);
    uVar3 = FUN_008e2df0(uVar2,0x18);
    if ((uVar3 & 1) == 0) {
      FUN_008e0b60(uVar2);
      iVar1 = FUN_008e6050();
      if (iVar1 != 0) {
        FUN_00943e60(auStack_98);
        FUN_00946b40(&local_c8);
        local_c0 = 1;
        local_b8 = iVar1;
        uVar4 = FUN_00942380(param_1);
        FUN_00942390(param_1);
        uVar5 = FUN_00931920();
        local_bc = FUN_008eca00(uVar4,uVar5,uVar2,iVar1,0);
        local_b4 = 0x100;
        local_b2 = 0;
        local_c8 = uVar2;
        FUN_008e0a00(uVar2);
        local_70 = FUN_008f94e0();
        local_6f = 0;
        FUN_00942390(param_1);
        uVar4 = FUN_009319f0();
        FUN_00935790(uVar4,auStack_a4);
        local_58 = *param_3;
        local_54 = 1;
        local_60 = &local_c8;
        FUN_00942450(param_1);
        uVar4 = FUN_00925060();
        FUN_009681e0(uVar4,local_68,&local_60);
        local_74 = local_68[0];
        uVar4 = FUN_00942420(param_1);
        FUN_00946020(uVar4,&local_c8);
        FUN_008e3830(uVar2,0x18);
      }
    }
  }
  return;
}


