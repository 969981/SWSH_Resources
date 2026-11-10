/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00355120; name: FUN_00355120
 */


undefined8 * FUN_00355120(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_1c8 [96];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
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
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 0x10))
                     (plVar1,0x30,"parseGeometry",
                      "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0xad);
  *puVar2 = 0x3f80000000000005;
  puVar2[1] = 0x3f8000003f800000;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0x3f80000000000000;
  puVar2[5] = 0;
  FUN_002175b0(auStack_1c8);
  FUN_002175b0(auStack_150);
  local_158 = param_1[4];
  local_c8 = param_1[5];
  local_160 = param_1[3];
  uStack_e8 = param_1[1];
  local_168 = param_1[2];
  local_f0 = *param_1;
  local_b8 = param_1[7];
  uStack_b0 = param_1[8];
  local_34[0] = '\0';
  local_a0 = local_34;
  local_90 = 0;
  uStack_98 = 0;
  local_a8 = 1;
  local_e0 = local_168;
  local_d8 = local_160;
  uStack_d0 = local_158;
  puStack_c0 = puVar2;
  local_88 = local_168;
  local_80 = local_160;
  uStack_78 = local_158;
  local_70 = local_168;
  local_68 = local_160;
  local_60 = local_158;
  local_58 = local_168;
  local_50 = local_160;
  local_48 = local_158;
  FUN_00323b30(&local_f0,auStack_150,0);
  FUN_00323d50(&local_f0,auStack_130,1);
  FUN_00323f10(&local_f0,auStack_110,2);
  if (local_34[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return puVar2;
}


