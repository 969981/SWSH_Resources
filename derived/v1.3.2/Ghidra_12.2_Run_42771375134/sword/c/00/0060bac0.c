/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060bac0; name: FUN_0060bac0
 */


undefined8 FUN_0060bac0(long param_1,ulong *param_2,void *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  void *__dest;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  size_t __n;
  undefined1 auStack_60 [16];
  long local_50;
  long lStack_48;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar5 = 0;
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    uVar5 = 0;
    if (plVar3 != (long *)0x0) {
      __n = (size_t)param_4;
      __dest = (void *)(**(code **)(*plVar3 + 0x40))
                                 (plVar3,1,__n,0xffffffff,
                                  "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp"
                                  ,0xd9);
      uVar5 = 0;
      if (__dest != (void *)0x0) {
        memcpy(__dest,param_3,__n);
        iVar2 = FUN_00604300(*(undefined8 *)(param_1 + 0x28),__dest,__n,(long)param_5,param_2);
        if (iVar2 == 0) {
          if (*(long *)(param_1 + 0x48) != 0) {
            lVar9 = *(long *)(param_1 + 0x48);
            do {
              if (*param_2 < *(ulong *)(lVar9 + 8)) {
                lVar8 = *(long *)(lVar9 + 0x20);
              }
              else {
                if (*param_2 <= *(ulong *)(lVar9 + 8)) {
                  if (*(long *)(lVar9 + 0x10) != 0) {
                    plVar3 = *(long **)(param_1 + 8);
                    if (plVar3 != (long *)0x0) {
                      (**(code **)(*plVar3 + 0x48))
                                (plVar3,*(long *)(lVar9 + 0x10),
                                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp"
                                 ,0xf4);
                    }
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                  }
                  *(void **)(lVar9 + 0x10) = __dest;
                  goto LAB_0060bcb0;
                }
                lVar8 = *(long *)(lVar9 + 0x28);
              }
            } while ((lVar8 != 0) && (bVar1 = lVar8 != lVar9, lVar9 = lVar8, bVar1));
          }
          FUN_0060b710(param_1 + 0x30,param_2,__dest);
LAB_0060bcb0:
          uVar5 = 1;
        }
        else {
          uVar4 = *param_2;
          lVar9 = param_1 + 0x30;
          lVar8 = *(long *)(param_1 + 0x48);
          local_50 = lVar9;
          if (*(long *)(param_1 + 0x48) != 0) {
            do {
              uVar6 = *(ulong *)(lVar8 + 8);
              if (uVar4 <= uVar6 && uVar6 != uVar4) {
                lVar7 = *(long *)(lVar8 + 0x20);
              }
              else {
                if (uVar4 <= uVar6) {
                  lStack_48 = lVar8;
                  FUN_00604370();
                  if (*(long *)(lVar8 + 0x10) != 0) {
                    plVar3 = *(long **)(param_1 + 8);
                    if (plVar3 != (long *)0x0) {
                      (**(code **)(*plVar3 + 0x48))
                                (plVar3,*(long *)(lVar8 + 0x10),
                                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp"
                                 ,0x10e);
                    }
                    *(undefined8 *)(lVar8 + 0x10) = 0;
                  }
                  FUN_0060bcd0(auStack_60,lVar9,&local_50);
                  plVar3 = *(long **)(param_1 + 8);
                  if (plVar3 == (long *)0x0) {
                    return 0;
                  }
                  goto LAB_0060bc5c;
                }
                lVar7 = *(long *)(lVar8 + 0x28);
              }
            } while ((lVar7 != 0) && (bVar1 = lVar7 != lVar8, lVar8 = lVar7, bVar1));
          }
          lStack_48 = 0;
          FUN_00604370();
          plVar3 = *(long **)(param_1 + 8);
          if (plVar3 == (long *)0x0) {
            uVar5 = 0;
          }
          else {
LAB_0060bc5c:
            (**(code **)(*plVar3 + 0x48))
                      (plVar3,__dest,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp"
                       ,0xed);
            uVar5 = 0;
          }
        }
      }
    }
  }
  return uVar5;
}


