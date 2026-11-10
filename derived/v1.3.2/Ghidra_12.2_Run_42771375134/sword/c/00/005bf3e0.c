/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bf3e0; name: FUN_005bf3e0
 */


undefined8 FUN_005bf3e0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar2 = 1;
  }
  else if (param_2 == 0) {
    plVar3 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar9 = *plVar3, lVar9 != 0)) {
      plVar7 = *(long **)(param_1 + 8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x50))(plVar7,lVar9);
        (**(code **)(*plVar7 + 0x48))
                  (plVar7,lVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar3 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar8 = *(ulong *)(param_1 + 0x10);
      puVar4 = (undefined8 *)
               (**(code **)(*plVar3 + 0x40))
                         (plVar3,0x90,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar2 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          uVar5 = param_2;
          puVar6 = puVar4;
          do {
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0xffffffffffffffff;
            uVar5 = uVar5 - 1;
            *(undefined1 *)(puVar6 + 3) = 0;
            puVar6[0x10] = 0;
            puVar6[0x11] = 0;
            puVar6[0xe] = 0;
            puVar6[0xf] = 0;
            puVar6[0xc] = 0;
            puVar6[0xd] = 0;
            puVar6[10] = puVar6 + 0x12;
            puVar6[0xb] = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[8] = 0;
            puVar6[9] = puVar6;
            puVar6[6] = puVar6;
            puVar6[7] = 0;
            puVar6 = puVar6 + 0x12;
          } while (uVar5 != 0);
        }
        uVar5 = param_2;
        if (uVar8 <= param_2) {
          uVar5 = uVar8;
        }
        if ((uVar5 != 0) && ((param_3 & 1) != 0)) {
          uVar1 = param_2;
          if (uVar8 <= param_2) {
            uVar1 = uVar8;
          }
          if (uVar1 == 1) {
            lVar9 = 0;
          }
          else {
            lVar10 = 0;
            lVar9 = 0;
            do {
              memcpy((void *)((long)puVar4 + lVar10),(void *)(*(long *)(param_1 + 0x28) + lVar10),
                     0x90);
              memcpy((void *)((long)puVar4 + lVar10 + 0x90),
                     (void *)(*(long *)(param_1 + 0x28) + lVar10 + 0x90),0x90);
              lVar9 = lVar9 + 2;
              lVar10 = lVar10 + 0x120;
            } while (uVar5 - (uVar5 & 1) != lVar9);
          }
          if ((uVar5 & 1) != 0) {
            memcpy(puVar4 + lVar9 * 0x12,(void *)(*(long *)(param_1 + 0x28) + lVar9 * 0x90),0x90);
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar9 = *(long *)(param_1 + 0x28), lVar9 != 0)) {
          plVar3 = *(long **)(param_1 + 8);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x50))(plVar3,lVar9);
            (**(code **)(*plVar3 + 0x48))
                      (plVar3,lVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar2 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar4;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar5;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar2;
}


