/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007cd890; name: FUN_007cd890
 */


void FUN_007cd890(long *param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_02716c70;
  *(undefined1 *)(param_1 + 2) = param_3;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  FUN_007cee00(param_1 + 4,param_4);
  plVar2 = (long *)param_1[1];
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (long)plVar2;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x12] = (long)plVar2;
  param_1[0x13] = 0x1ffffffffffffff;
  param_1[0x1a] = (long)plVar2;
  param_1[0x1b] = 0x1ffffffffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x400,0x10);
  FUN_007cef00(param_1 + 0x1a,uVar3,8,param_1[0x22] + param_1[0x23] * 0x80,0,0);
  return;
}


