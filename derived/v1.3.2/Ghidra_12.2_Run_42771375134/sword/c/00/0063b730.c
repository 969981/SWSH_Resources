/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063b730; name: FUN_0063b730
 */


undefined8 FUN_0063b730(long param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  local_60 = 0x30000000b;
  local_58 = 0x100000003;
  uStack_50 = 0;
  local_48 = 0x142c80000;
  local_40 = 8;
  local_24 = 0;
  local_2c = 0;
  local_34 = 0;
  local_3c = 0;
  lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x1a0))
                    (*(long **)(param_1 + 0x18),&local_60,0,0,0);
  *(long *)(param_1 + 0x3e00) = lVar1;
  uVar2 = 0;
  if (lVar1 != 0) {
    if (*param_3 != '\0') {
      FUN_00643a50(param_1 + 0x3780,param_1);
    }
    if (param_3[1] != '\0') {
      FUN_00646d10(param_1 + 0x2c70,param_1);
    }
    FUN_0063b800(param_1);
    uVar2 = 1;
  }
  return uVar2;
}


