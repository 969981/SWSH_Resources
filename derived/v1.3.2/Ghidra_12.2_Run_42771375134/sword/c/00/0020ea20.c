/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020ea20; name: FUN_0020ea20
 */


void FUN_0020ea20(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_58 = 0xa800000000;
  local_48 = 3;
  local_68 = "NpArticulation";
  local_60 = (char *)0x0;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpArticulation";
  local_60 = "PxBase";
  local_58 = 0xa800000000;
  local_50 = 0;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "void";
  local_60 = "userData";
  local_58 = 0x800000010;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Scb::Articulation";
  local_60 = "mArticulation";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0x4800000018;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpArticulationLinkArray";
  local_60 = "mArticulationLinks";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0x3800000060;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpAggregate";
  local_60 = "mAggregate";
  local_50 = 1;
  local_58 = 0x800000098;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "char";
  local_60 = "mName";
  local_58 = 0x8000000a0;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "char";
  local_60 = "string";
  local_58 = 0;
  local_50 = 0;
  local_48 = 0x90;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


