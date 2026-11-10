/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035c370; name: FUN_0035c370
 */


undefined8 * FUN_0035c370(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_140 [32];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_34 [4];
  
  plVar1 = (long *)(**(code **)(*(long *)param_1[7] + 0x20))();
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 0x10))
                     (plVar1,0x10,"parseGeometry",
                      "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0xad);
  *puVar2 = 3;
  puVar2[1] = 0;
  FUN_002171b0(auStack_140);
  FUN_002171b0(auStack_108);
  local_110 = param_1[4];
  local_c0 = param_1[5];
  local_118 = param_1[3];
  uStack_e0 = param_1[1];
  local_120 = param_1[2];
  local_e8 = *param_1;
  local_b0 = param_1[7];
  uStack_a8 = param_1[8];
  local_34[0] = '\0';
  local_98 = local_34;
  local_88 = 0;
  uStack_90 = 0;
  local_a0 = 1;
  local_d8 = local_120;
  local_d0 = local_118;
  uStack_c8 = local_110;
  puStack_b8 = puVar2;
  local_80 = local_120;
  local_78 = local_118;
  uStack_70 = local_110;
  local_68 = local_120;
  local_60 = local_118;
  local_58 = local_110;
  local_50 = local_120;
  local_48 = local_118;
  local_40 = local_110;
  FUN_00322000(&local_e8,auStack_108,0);
  if (local_34[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return puVar2;
}


