/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00355280; name: FUN_00355280
 */


undefined4 * FUN_00355280(undefined8 *param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined1 auStack_248 [160];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_34 [4];
  
  plVar1 = (long *)(**(code **)(*(long *)param_1[7] + 0x20))();
  puVar2 = (undefined4 *)
           (**(code **)(*plVar1 + 0x10))
                     (plVar1,0x20,"parseGeometry",
                      "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0xad);
  *puVar2 = 6;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0x3f8000003f800000;
  *(undefined8 *)(puVar2 + 6) = 0x3f800000;
  FUN_002176f0(auStack_248);
  FUN_002176f0(auStack_190);
  local_198 = param_1[4];
  local_c8 = param_1[5];
  local_1a0 = param_1[3];
  uStack_e8 = param_1[1];
  local_1a8 = param_1[2];
  local_f0 = *param_1;
  local_b8 = param_1[7];
  uStack_b0 = param_1[8];
  local_34[0] = '\0';
  local_a0 = local_34;
  local_90 = 0;
  local_a8 = 1;
  uStack_98 = 0;
  local_e0 = local_1a8;
  local_d8 = local_1a0;
  uStack_d0 = local_198;
  puStack_c0 = puVar2;
  uStack_88 = local_1a8;
  local_80 = local_1a0;
  uStack_78 = local_198;
  local_70 = local_1a8;
  local_68 = local_1a0;
  local_60 = local_198;
  local_58 = local_1a8;
  local_50 = local_1a0;
  local_48 = local_198;
  FUN_00324430(&local_f0,auStack_190,0);
  FUN_00324690(&local_f0,auStack_170,1);
  FUN_00324840(&local_f0,auStack_150,2);
  FUN_003249f0(&local_f0,auStack_130,3);
  FUN_00324ba0(&local_f0,auStack_110,4);
  if (local_34[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return puVar2;
}


