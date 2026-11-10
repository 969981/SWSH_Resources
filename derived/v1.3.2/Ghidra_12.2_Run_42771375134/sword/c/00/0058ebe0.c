/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058ebe0; name: FUN_0058ebe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058ebe0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,undefined8 param_10,undefined8 *param_11,undefined8 param_12,
                 undefined4 param_13)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  uint in_stack_00000010;
  float in_stack_00000020;
  undefined8 local_80;
  ulong local_78;
  
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x7a60));
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_10);
  (**(code **)(**(long **)(param_9 + 0x29ac0) + 0x78))(*(long **)(param_9 + 0x29ac0),0xf);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),
             *(undefined8 *)(param_9 + 0x29ac0));
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x48),
             *(undefined8 *)(param_9 + 0x29ab8));
  _DAT_02760a18 = *param_11;
  _DAT_02760a20 = param_11[1];
  _DAT_02760a28 = 0x3fc000003fc00000;
  _DAT_02760a30 = 0x3fc00000;
  _DAT_02760a38 = 0x3f8000003f800000;
  DAT_02760a40 = 0x3f800000;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,3);
  local_80 = CONCAT44(in_stack_00000008,in_stack_00000000);
  local_78 = (ulong)in_stack_00000010;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd4),&local_80);
  local_80 = 0x4080000040000000;
  local_78 = 0x3f80000000000000;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x128),&local_80);
  tanf(in_stack_00000020 * 0.5);
  FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_13);
  return;
}


