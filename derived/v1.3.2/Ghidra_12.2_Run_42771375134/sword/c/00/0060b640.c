/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060b640; name: FUN_0060b640
 */


void FUN_0060b640(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [16];
  long local_40;
  long lStack_38;
  
  lVar6 = *(long *)(param_1 + 0x48);
  lVar1 = param_1 + 0x30;
  local_40 = lVar1;
  if (lVar6 != 0) {
    do {
      uVar4 = *(ulong *)(lVar6 + 8);
      if (param_2 <= uVar4 && uVar4 != param_2) {
        lVar5 = *(long *)(lVar6 + 0x20);
      }
      else {
        if (param_2 <= uVar4) {
          lStack_38 = lVar6;
          FUN_00604370(param_2);
          if (*(long *)(lVar6 + 0x10) != 0) {
            plVar3 = *(long **)(param_1 + 8);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x48))
                        (plVar3,*(long *)(lVar6 + 0x10),
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp"
                         ,0x10e);
            }
            *(undefined8 *)(lVar6 + 0x10) = 0;
          }
          FUN_0060bcd0(auStack_50,lVar1,&local_40);
          return;
        }
        lVar5 = *(long *)(lVar6 + 0x28);
      }
    } while ((lVar5 != 0) && (bVar2 = lVar5 != lVar6, lVar6 = lVar5, bVar2));
  }
  lStack_38 = 0;
  FUN_00604370(param_2);
  return;
}


