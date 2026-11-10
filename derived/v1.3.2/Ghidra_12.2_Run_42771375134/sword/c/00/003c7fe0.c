/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c7fe0; name: FUN_003c7fe0
 */


void FUN_003c7fe0(undefined8 *param_1)

{
  char *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uStack_40 = 0;
  local_48 = 0x1000000000;
  local_58 = "Sc::RigidCore";
  pcStack_50 = (char *)0x0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_38 = 1;
  local_58 = "Sc::RigidCore";
  pcStack_50 = "Sc::ActorCore";
  local_48 = 0x1000000000;
  uStack_40 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


