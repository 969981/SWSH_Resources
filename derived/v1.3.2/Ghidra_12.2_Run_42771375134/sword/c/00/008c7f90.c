/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c7f90; name: FUN_008c7f90
 */


void FUN_008c7f90(long param_1)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_28;
  
  if ((((*(long *)(param_1 + 0x5e8) != 0) && (*(char *)(*(long *)(param_1 + 0x5e8) + 0x82) != '\0'))
      && (*(int *)(param_1 + 0x710) != 0)) &&
     (iVar4 = *(int *)(param_1 + 0x710) + -1, *(int *)(param_1 + 0x710) = iVar4, iVar4 == 0)) {
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar6 = FUN_015200a0(lVar7,*(undefined4 *)
                                (param_1 + (long)*(int *)(param_1 + 0x640) * 4 + 0x64c),&local_28);
    puVar1 = (uint *)(lVar6 + (ulong)*(uint *)(param_1 + 0x738) * 4);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if ((puVar1 != (uint *)0x0) &&
       (uVar2 = *puVar1, (uVar2 & 0x3fff8000) != 0 && (uVar2 & 0x40000000) != 0)) {
      *puVar1 = uVar2 & 0xbfffffff;
      local_28 = *(undefined8 *)(PTR_DAT_02717ad0 + (ulong)*(uint *)(param_1 + 0x73c) * 0x88 + 0x30)
      ;
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
      uVar8 = (ulong)*(uint *)(param_1 + (long)*(int *)(param_1 + 0x640) * 4 + 0x64c);
      local_28 = *(undefined8 *)(PTR_DAT_02717ae0 + uVar8 * 0x20 + 8);
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
      bVar5 = FUN_008c7b40(param_1,uVar8);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar5 & 1;
      sVar3 = *(short *)(param_1 + 0x89c);
      goto joined_r0x008c7fcc;
    }
  }
  sVar3 = *(short *)(param_1 + 0x89c);
joined_r0x008c7fcc:
  if (sVar3 != 0) {
    *(short *)(param_1 + 0x89c) = sVar3 + -1;
  }
  FUN_008c7960(param_1);
  return;
}


