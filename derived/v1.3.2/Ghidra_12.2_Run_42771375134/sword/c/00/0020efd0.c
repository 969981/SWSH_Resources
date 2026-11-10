/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020efd0; name: FUN_0020efd0
 */


void FUN_0020efd0(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_48 = 0xe000000000;
  local_58 = "NpCloth";
  local_50 = (char *)0x0;
  local_38 = 3;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "NpCloth";
  local_50 = "PxBase";
  local_48 = 0xe000000000;
  local_40 = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_38 = 1;
  local_58 = "NpCloth";
  local_50 = "NpActor";
  local_48 = 0xe000000018;
  local_40 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "void";
  local_50 = "userData";
  local_48 = 0x800000010;
  local_40 = 1;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "Scb::Cloth";
  local_50 = "mCloth";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x8800000028;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "NpClothFabric";
  local_50 = "mClothFabric";
  local_40 = 1;
  local_48 = 0x8000000b0;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU8";
  local_50 = "mParticleData";
  local_48 = 0x28000000b8;
  local_40 = 0x28;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


