/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00676a90; name: FUN_00676a90
 */


void FUN_00676a90(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_90 [16];
  long local_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  
  if (*(long *)(param_1 + 0x128) != 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_006966f0(auStack_70,*(long *)(param_1 + 0x110) + 0x18,1);
    puVar3 = PTR_DAT_02714328;
    lVar5 = *(long *)(param_1 + 0x110);
    if (*(long *)(lVar5 + 0x58) != 0) {
      puVar1 = PTR_DAT_02714328 + 0x10;
      do {
        local_80 = lVar5 + 0x48;
        lStack_78 = *(long *)(lVar5 + 0x60);
        lVar5 = *(long *)(lStack_78 + 0x20);
        FUN_00666fc0(auStack_90,local_80,&local_80);
        if ((lVar5 != 0) && (plVar6 = *(long **)(param_1 + 8), plVar6 != (long *)0x0)) {
          FUN_0066e8d0(lVar5);
          plVar2 = (long *)(lVar5 + 0xb0);
          *(undefined **)(lVar5 + 0x88) = puVar1;
          if (((*(byte *)(lVar5 + 0xd0) & 1) == 0) && (*plVar2 != 0)) {
            plVar4 = *(long **)(lVar5 + 0x90);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x48))
                        (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
            }
            *plVar2 = 0;
          }
          *(undefined8 *)(lVar5 + 0x98) = 0;
          *(undefined8 *)(lVar5 + 0xa0) = 0;
          *(undefined8 *)(lVar5 + 0xd0) = 0;
          *plVar2 = 0;
          *(undefined8 *)(lVar5 + 0xb8) = 0;
          *(undefined8 *)(lVar5 + 0xc0) = 0;
          plVar2 = (long *)(lVar5 + 0x48);
          *(undefined **)(lVar5 + 0x20) = puVar3 + 0x10;
          if (((*(byte *)(lVar5 + 0x68) & 1) == 0) && (*plVar2 != 0)) {
            plVar4 = *(long **)(lVar5 + 0x28);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x48))
                        (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
            }
            *plVar2 = 0;
          }
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined8 *)(lVar5 + 0x38) = 0;
          *(undefined8 *)(lVar5 + 0x68) = 0;
          *(undefined8 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x58) = 0;
          *plVar2 = 0;
          (**(code **)(*plVar6 + 0x48))
                    (plVar6,lVar5,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffect_Impl.cpp"
                     ,0x25d);
        }
        lVar5 = *(long *)(param_1 + 0x110);
      } while (*(long *)(lVar5 + 0x58) != 0);
    }
    FUN_00696730(auStack_70);
    if (*(long **)(param_1 + 0x110) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x110) + 0x18))();
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
  }
  return;
}


