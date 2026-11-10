/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00216cd0; name: FUN_00216cd0
 */


void FUN_00216cd0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 1) = 0x17;
  puVar1 = PTR_LAB_027113d8;
  *(undefined4 *)(param_1 + 4) = 0x18;
  *param_1 = "Scene";
  puVar3 = PTR_LAB_027113e8;
  puVar2 = PTR_LAB_027113e0;
  param_1[2] = puVar1;
  param_1[3] = &DAT_01d0fc7e;
  param_1[5] = puVar2;
  param_1[6] = puVar3;
  param_1[7] = "ActorFlags";
  puVar2 = PTR_LAB_027113f8;
  *(undefined4 *)(param_1 + 8) = 0x19;
  puVar1 = PTR_LAB_027113f0;
  param_1[9] = puVar2;
  param_1[10] = puVar1;
  param_1[0xb] = "DominanceGroup";
  *(undefined4 *)(param_1 + 0xc) = 0x1a;
  puVar1 = PTR_LAB_02711408;
  param_1[0xd] = PTR_LAB_02711400;
  param_1[0xe] = puVar1;
  param_1[0xf] = "OwnerClient";
  puVar2 = PTR_LAB_02711418;
  puVar1 = PTR_LAB_02711410;
  *(undefined4 *)(param_1 + 0x10) = 0x1b;
  param_1[0x11] = puVar1;
  param_1[0x12] = puVar2;
  param_1[0x13] = "ClientBehaviorFlags";
  puVar1 = PTR_LAB_02711420;
  *(undefined4 *)(param_1 + 0x14) = 0x1c;
  puVar2 = PTR_LAB_02711428;
  param_1[0x15] = puVar1;
  param_1[0x16] = puVar2;
  param_1[0x17] = "Aggregate";
  *(undefined4 *)(param_1 + 0x18) = 0x1d;
  param_1[0x19] = PTR_LAB_02711430;
  param_1[0x1a] = "UserData";
  puVar2 = PTR_LAB_02711440;
  puVar1 = PTR_LAB_02711438;
  *(undefined4 *)(param_1 + 0x1b) = 0x1e;
  param_1[0x1c] = puVar1;
  param_1[0x1d] = puVar2;
  param_1[0x1e] = "Damping";
  puVar1 = PTR_LAB_02711ad0;
  *(undefined4 *)(param_1 + 0x1f) = 0xb7;
  puVar2 = PTR_LAB_02711ad8;
  param_1[0x20] = puVar1;
  param_1[0x21] = puVar2;
  param_1[0x22] = "ExternalAcceleration";
  *(undefined4 *)(param_1 + 0x23) = 0xb8;
  puVar1 = PTR_LAB_02711ae0;
  param_1[0x24] = PTR_LAB_02711af0;
  param_1[0x25] = puVar1;
  param_1[0x26] = "ParticleMass";
  puVar2 = PTR_LAB_02711af8;
  puVar1 = PTR_LAB_02711ae8;
  *(undefined4 *)(param_1 + 0x27) = 0xb9;
  param_1[0x28] = puVar2;
  param_1[0x29] = puVar1;
  param_1[0x2a] = "Restitution";
  puVar1 = PTR_LAB_02711b00;
  *(undefined4 *)(param_1 + 0x2b) = 0xba;
  puVar2 = PTR_LAB_02711b08;
  param_1[0x2c] = puVar1;
  param_1[0x2d] = puVar2;
  param_1[0x2e] = "DynamicFriction";
  *(undefined4 *)(param_1 + 0x2f) = 0xbb;
  puVar1 = PTR_LAB_02711b10;
  param_1[0x30] = PTR_LAB_02711b20;
  param_1[0x31] = puVar1;
  param_1[0x32] = "StaticFriction";
  puVar2 = PTR_LAB_02711b28;
  puVar1 = PTR_LAB_02711b18;
  *(undefined4 *)(param_1 + 0x33) = 0xbc;
  param_1[0x34] = puVar2;
  param_1[0x35] = puVar1;
  param_1[0x36] = "SimulationFilterData";
  puVar1 = PTR_LAB_02711b30;
  *(undefined4 *)(param_1 + 0x37) = 0xbd;
  puVar2 = PTR_LAB_02711b38;
  param_1[0x38] = puVar1;
  param_1[0x39] = puVar2;
  param_1[0x3a] = "ParticleBaseFlags";
  *(undefined4 *)(param_1 + 0x3b) = 0xbe;
  param_1[0x3c] = PTR_LAB_02711b40;
  param_1[0x3d] = "MaxParticles";
  puVar1 = PTR_LAB_02711b48;
  *(undefined4 *)(param_1 + 0x3e) = 0xbf;
  param_1[0x3f] = puVar1;
  param_1[0x40] = "MaxMotionDistance";
  puVar1 = PTR_LAB_02711b50;
  *(undefined4 *)(param_1 + 0x41) = 0xc0;
  puVar2 = PTR_LAB_02711b58;
  param_1[0x42] = puVar1;
  param_1[0x43] = puVar2;
  param_1[0x44] = "RestOffset";
  *(undefined4 *)(param_1 + 0x45) = 0xc1;
  param_1[0x46] = PTR_LAB_02711b68;
  param_1[0x47] = PTR_LAB_02711b70;
  param_1[0x48] = "ContactOffset";
  *(undefined4 *)(param_1 + 0x49) = 0xc2;
  param_1[0x4a] = PTR_LAB_02711b78;
  param_1[0x4b] = PTR_LAB_02711b80;
  param_1[0x4c] = "GridSize";
  puVar1 = PTR_LAB_02711b60;
  *(undefined4 *)(param_1 + 0x4d) = 0xc3;
  puVar2 = PTR_LAB_02711b88;
  param_1[0x4e] = puVar1;
  param_1[0x4f] = puVar2;
  param_1[0x50] = "ParticleReadDataFlags";
  *(undefined4 *)(param_1 + 0x51) = 0xc4;
  param_1[0x52] = PTR_LAB_02711b90;
  FUN_00217e90(param_1 + 0x53);
  return;
}


