/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a8d0d0; name: FUN_00a8d0d0
 */


void FUN_00a8d0d0(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_70 = *param_2;
  local_68 = param_2[1];
  local_60 = param_2[2];
  local_58 = param_2[3];
  local_50 = param_2[4];
  local_48 = param_2[5];
  local_40 = param_2[6];
  local_38 = param_2[7];
  local_30 = param_2[8];
  local_28 = param_2[9];
  local_20 = param_2[10];
  local_18 = param_2[0xb];
  pcVar2 = (code *)param_1[1];
  plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
  if ((param_1[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,&local_70,*param_3);
  return;
}


