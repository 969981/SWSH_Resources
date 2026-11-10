/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00642d30; name: FUN_00642d30
 */


void FUN_00642d30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar4 = *(long *)(param_1 + 0x28), lVar4 != 0)) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar5 + 0x50))(plVar5,lVar4);
      if (lVar2 != 0) {
        puVar1 = PTR_DAT_027149b0 + 0x10;
        plVar6 = (long *)(lVar4 + 0x38);
        do {
          FUN_00642a00(plVar6[-7],plVar6 + -5,0);
          plVar6[-5] = (long)puVar1;
          if (((*(byte *)(plVar6 + 4) & 1) == 0) && (*plVar6 != 0)) {
            plVar3 = (long *)plVar6[-4];
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x48))
                        (plVar3,*plVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
            }
            *plVar6 = 0;
          }
          plVar6[-3] = 0;
          plVar6[-2] = 0;
          lVar2 = lVar2 + -1;
          plVar6[4] = 0;
          plVar6[1] = 0;
          plVar6[2] = 0;
          *plVar6 = 0;
          plVar6 = plVar6 + 0xc;
        } while (lVar2 != 0);
      }
      (**(code **)(*plVar5 + 0x48))(plVar5,lVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}


