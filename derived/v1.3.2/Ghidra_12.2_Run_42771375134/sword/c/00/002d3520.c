/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d3520; name: FUN_002d3520
 */


void FUN_002d3520(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_002d2570();
  FUN_002d2760(param_1);
  local_40 = 0;
  local_48 = 0x11800000000;
  local_58 = "BV4TriangleMesh";
  local_50 = (char *)0x0;
  local_38 = 3;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "BV4TriangleMesh";
  local_50 = "TriangleMesh";
  local_48 = 0x11800000000;
  local_40 = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "SourceMesh";
  local_50 = "mMeshInterface";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x30000000a0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "BV4Tree";
  local_50 = "mBV4Tree";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x48000000d0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


