/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa6d50; name: FUN_00aa6d50
 */


void FUN_00aa6d50(undefined8 param_1,undefined2 param_2)

{
  switch(param_2) {
  case 0x2a:
    FUN_00aa0670("bin/battle/waza/particle/es001/es001_nemuri.ptcl");
    return;
  case 0x2b:
    FUN_00aa0670("bin/battle/waza/particle/es002/es002_poison.ptcl");
    return;
  case 0x2c:
    FUN_00a9fec0("bin/battle/waza/particle/es003/es003_fire.ptcl");
    return;
  case 0x2d:
    FUN_00aa6ea0("bin/battle/waza/particle/es004/es004_ice.ptcl");
    return;
  case 0x2e:
    FUN_00a8e040("bin/battle/waza/particle/es005/es005_paralysis.ptcl");
    return;
  case 0x2f:
    FUN_00a8e040("bin/battle/waza/particle/es006/es006_confusion.ptcl");
    return;
  case 0x30:
  case 0xb6:
    FUN_00a8dc70("bin/battle/waza/particle/es007/es007_heart.ptcl");
    return;
  case 0x31:
    FUN_00aa07a0("bin/battle/waza/particle/es008/es008_up.ptcl");
    return;
  case 0x32:
    FUN_00a9fec0("bin/battle/waza/particle/es009/es009_down.ptcl");
    return;
  case 0x33:
    FUN_00a9fec0("bin/battle/waza/particle/es010/es010_heal.ptcl");
    return;
  default:
    FUN_00a9fec0("bin/battle/waza/particle/es009/es009_down.ptcl");
    return;
  case 0x88:
    FUN_00a9fec0("bin/battle/waza/particle/es008/es008_g_up.ptcl");
    return;
  case 0x89:
    FUN_00aa0670("bin/battle/waza/particle/es009/es009_g_down.ptcl");
    return;
  case 0xb1:
    FUN_00a8a290("bin/battle/waza/particle/es001/es001_g_nemuri.ptcl");
    return;
  case 0xb2:
    FUN_00a8a290("bin/battle/waza/particle/es002/es002_g_poison.ptcl");
    return;
  case 0xb3:
    FUN_00aa0670("bin/battle/waza/particle/es003/es003_g_fire.ptcl");
    return;
  case 0xb4:
    FUN_00a8dc70("bin/battle/waza/particle/es004/es004_g_ice.ptcl");
    return;
  case 0xb5:
    FUN_00a75320("bin/battle/waza/particle/es005/es005_g_paralysis.ptcl");
    return;
  case 0xb7:
    FUN_00aa6fd0("bin/battle/waza/particle/es007/es007_g_heart.ptcl");
    return;
  case 0xb8:
    FUN_00aa0670("bin/battle/waza/particle/es010/es010_g_heal.ptcl");
    return;
  case 0xca:
    FUN_001060b0("bin/battle/waza/particle/es063/es063.ptcl");
    return;
  case 0xcb:
    FUN_001060b0("bin/battle/waza/particle/es064/es064.ptcl");
    return;
  case 0xcc:
    FUN_00aa07a0("bin/battle/waza/particle/es063/es_g_063.ptcl");
    return;
  case 0xcd:
    FUN_00aa07a0("bin/battle/waza/particle/es064/es_g_064.ptcl");
    return;
  }
}


