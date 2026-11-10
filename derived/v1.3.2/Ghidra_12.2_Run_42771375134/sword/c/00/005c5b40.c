/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5b40; name: FUN_005c5b40
 */


int FUN_005c5b40(char *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  
  local_30 = auStack_90;
  local_38 = auStack_90 + 0x30;
  local_28 = 0xffffff80ffffffd8;
  local_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  local_40 = (undefined1 *)register0x00000008;
  iVar1 = vsprintf(param_1,param_3,&local_40);
  return iVar1;
}


