/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f8860; name: FUN_005f8860
 */


undefined8 FUN_005f8860(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_d0 [128];
  
  iVar2 = *(int *)(param_1 + 0x108);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      lVar1 = param_1 + lVar5 * 8;
      plVar3 = *(long **)(lVar1 + 0x278);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x98))(plVar3);
        (**(code **)(*plVar3 + 0x18))(plVar3);
        iVar2 = *(int *)(param_1 + 0x108);
      }
      lVar5 = lVar5 + 1;
      *(undefined8 *)(lVar1 + 0x278) = 0;
    } while (lVar5 < iVar2);
    if (0 < iVar2) {
      uVar4 = 0;
      lVar5 = param_1 + 0x10c;
      do {
        plVar3 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                                   (*(long **)(param_1 + 8),0x3a0,0x10,
                                    "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp"
                                    ,0x5bd);
        FUN_005fb780(plVar3,*(undefined8 *)(param_1 + 8),param_1);
        FUN_005c5b40(auStack_d0,0x80,"DefaultCanvas_%d",uVar4 & 0xffffffff);
        (**(code **)(*plVar3 + 0x198))(plVar3,auStack_d0);
        FUN_005fbbd0(plVar3,*(undefined8 *)(param_1 + 0x230),lVar5);
        lVar1 = uVar4 * 8;
        uVar4 = uVar4 + 1;
        *(long **)(param_1 + lVar1 + 0x278) = plVar3;
        lVar5 = lVar5 + 0x48;
      } while ((long)uVar4 < (long)*(int *)(param_1 + 0x108));
    }
  }
  return 1;
}


