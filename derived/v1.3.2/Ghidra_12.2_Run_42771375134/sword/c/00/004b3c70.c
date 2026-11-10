/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b3c70; name: FUN_004b3c70
 */


void FUN_004b3c70(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  long *plVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  puVar4 = *(ushort **)(param_2 + 0x20);
  uVar3 = (uint)param_3;
  if (puVar4 != (ushort *)0x0) {
    uVar6 = 0;
    puVar5 = (undefined4 *)((long)puVar4 + ((ulong)((uint)*puVar4 * 2 + 5) & 0x3fffc));
    do {
      if ((uint)puVar4[uVar6 + 1] == (uVar3 & 0xffff)) {
        if (puVar5 != (undefined4 *)0x0) {
          uVar9 = *puVar5;
          *puVar5 = param_1;
          if (((param_4 & 1) == 0) || (*(long *)(puVar5 + 2) == 0)) {
            iVar8 = 0;
            iVar7 = 0;
            plVar2 = *(long **)(param_2 + 0x18);
            cVar1 = (char)plVar2[1];
          }
          else {
            iVar8 = 1;
            iVar7 = 1;
            *(undefined8 *)(puVar5 + 2) = 0;
            plVar2 = *(long **)(param_2 + 0x18);
            cVar1 = (char)plVar2[1];
          }
          goto joined_r0x004b3d68;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar6 < *puVar4);
  }
  iVar8 = 0;
  iVar7 = 0;
  uVar9 = 0x3f800000;
  if ((uVar3 >> 0x10 & 0xff) != 3) {
    uVar9 = 0;
  }
  plVar2 = *(long **)(param_2 + 0x18);
  cVar1 = (char)plVar2[1];
joined_r0x004b3d68:
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x48))
              (uVar9,plVar2,param_3,uVar3 >> 0x10 & 0xff,*(undefined4 *)(param_2 + 0x38),iVar8);
    iVar7 = iVar8;
  }
  if (iVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b3d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x18) + 0x18))();
  return;
}


