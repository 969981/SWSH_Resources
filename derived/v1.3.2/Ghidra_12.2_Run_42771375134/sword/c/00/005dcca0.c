/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dcca0; name: FUN_005dcca0
 */


long * FUN_005dcca0(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0x118,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_IOSlotType.cpp"
                              ,0x24);
  FUN_005dc7e0(plVar3,param_1);
  *(undefined4 *)(plVar3 + 0x17) = param_2;
  puVar2 = PTR_DAT_027141f0;
  *(undefined2 *)((long)plVar3 + 0xbc) = 0;
  *(undefined1 *)((long)plVar3 + 0xbe) = 0;
  puVar1 = PTR_DAT_027141e0;
  plVar3[0x1a] = (long)param_1;
  plVar3[0x1b] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = (long)(puVar2 + 0xa0);
  plVar3[2] = (long)(puVar2 + 0xd8);
  plVar3[3] = (long)(puVar2 + 0x108);
  plVar3[0x1e] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = (long)(puVar1 + 0x10);
  plVar3[0x1c] = 0;
  plVar3[0x1d] = 8;
  plVar3[0x21] = 0;
  plVar3[0x22] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x20] = 0;
  if (param_1 == (long *)0x0) {
    lVar5 = FUN_005bc6f0();
    plVar3[0x1a] = lVar5;
    plVar3[4] = (long)plVar3;
    plVar3[5] = *(long *)PTR_DAT_027141f8;
    uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  else {
    lVar5 = *(long *)PTR_DAT_027141f8;
    plVar3[4] = (long)plVar3;
    plVar3[5] = lVar5;
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar4 = (**(code **)(puVar2 + 0x48))(plVar3);
  }
  if ((uVar4 & 1) == 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


