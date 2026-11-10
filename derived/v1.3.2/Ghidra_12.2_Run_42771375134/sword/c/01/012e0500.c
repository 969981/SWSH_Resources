/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e0500; name: FUN_012e0500
 */


void FUN_012e0500(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 local_44;
  
  plVar5 = *(long **)(param_1 + 0x110);
  plVar6 = *(long **)(param_1 + 0x118);
  if (plVar6 != plVar5) {
    do {
      while (*plVar5 == param_2) {
        local_44 = param_3;
        uVar1 = (*(code *)plVar5[2])(plVar5 + 6,&local_44);
        if ((uVar1 & 1) == 0) {
          plVar6 = *(long **)(param_1 + 0x118);
          break;
        }
        plVar4 = *(long **)(param_1 + 0x118);
        plVar6 = plVar5;
        if (plVar5 + 0x12 == plVar4) {
          pcVar2 = (code *)plVar5[3];
          plVar4 = plVar5 + 0x12;
          plVar3 = plVar5;
          goto joined_r0x012e0640;
        }
        do {
          *plVar6 = plVar6[0x12];
          pcVar2 = (code *)plVar6[3];
          if (pcVar2 != (code *)0x0) {
            plVar6[4] = 0;
            plVar6[5] = 0;
            plVar6[2] = 0;
            plVar6[3] = 0;
            (*pcVar2)(plVar6 + 6);
          }
          if ((code *)plVar6[0x17] != (code *)0x0) {
            (*(code *)plVar6[0x17])(plVar6 + 0x18,plVar6 + 6);
            pcVar2 = (code *)plVar6[0x15];
            plVar6[4] = plVar6[0x16];
            plVar6[5] = plVar6[0x17];
            plVar6[2] = plVar6[0x14];
            plVar6[3] = (long)pcVar2;
            if (pcVar2 != (code *)0x0) {
              plVar6[0x16] = 0;
              plVar6[0x17] = 0;
              plVar6[0x14] = 0;
              plVar6[0x15] = 0;
              (*pcVar2)(plVar6 + 0x18);
            }
          }
          plVar6 = plVar6 + 0x12;
        } while (plVar4 + -0x12 != plVar6);
        plVar3 = *(long **)(param_1 + 0x118);
        if (plVar3 != plVar6) {
          do {
            pcVar2 = (code *)plVar3[-0xf];
            plVar4 = plVar3;
            plVar3 = plVar3 + -0x12;
joined_r0x012e0640:
            if (pcVar2 != (code *)0x0) {
              plVar4[-0xe] = 0;
              plVar4[-0xd] = 0;
              plVar4[-0x10] = 0;
              plVar4[-0xf] = 0;
              (*pcVar2)(plVar4 + -0xc);
            }
          } while (plVar6 != plVar3);
        }
        *(long **)(param_1 + 0x118) = plVar6;
        if (plVar6 == plVar5) {
          return;
        }
      }
      plVar5 = plVar5 + 0x12;
    } while (plVar6 != plVar5);
  }
  return;
}


