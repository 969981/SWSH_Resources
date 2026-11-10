/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f9080; name: FUN_002f9080
 */


void FUN_002f9080(undefined8 *param_1)

{
  char *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_80 = "PxU64";
  local_78 = 0;
  local_88 = "PxSerialObjectId";
  local_70 = 0;
  local_68 = 4;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_70 = 0;
  local_88 = "SerialObjectIndex";
  local_80 = "PxU32";
  local_78 = 0;
  local_68 = 4;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_70 = 0;
  local_88 = "Sn::ManifestEntry";
  local_80 = (char *)0x0;
  local_78 = 0x800000000;
  local_68 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_88 = "PxU32";
  local_80 = "offset";
  local_78 = 0x400000000;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_78 = 0x200000004;
  local_88 = "PxType";
  local_80 = "type";
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_70 = 0;
  local_88 = "Sn::ImportReference";
  local_80 = (char *)0x0;
  local_78 = 0x1000000000;
  local_68 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_88 = "PxSerialObjectId";
  local_80 = "id";
  local_78 = 0x800000000;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_70 = 1;
  local_88 = "PxType";
  local_80 = "type";
  local_78 = 0x200000008;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_70 = 0;
  local_88 = "Sn::ExportReference";
  local_80 = (char *)0x0;
  local_78 = 0x1000000000;
  local_68 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_88 = "PxSerialObjectId";
  local_80 = "id";
  local_78 = 0x800000000;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_78 = 0x400000008;
  local_88 = "SerialObjectIndex";
  local_80 = "objIndex";
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_70 = 0;
  local_88 = "Sn::InternalReferencePtr";
  local_80 = (char *)0x0;
  local_78 = 0x1000000000;
  local_68 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "void";
  local_80 = "reference";
  local_78 = 0x800000000;
  local_70 = 1;
  local_68 = 8;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_78 = 0x400000008;
  local_68 = 0;
  local_88 = "PxU32";
  local_80 = "kind";
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_70 = 1;
  local_88 = "SerialObjectIndex";
  local_80 = "objIndex";
  local_78 = 0x40000000c;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "Sn::InternalReferenceIdx";
  local_80 = (char *)0x0;
  local_70 = 0;
  local_78 = 0xc00000000;
  local_68 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_88 = "PxU32";
  local_80 = "reference";
  local_78 = 0x400000000;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_88 = "PxU32";
  local_80 = "kind";
  local_78 = 0x400000004;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_88 = "SerialObjectIndex";
  local_80 = "objIndex";
  local_78 = 0x400000008;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  return;
}


