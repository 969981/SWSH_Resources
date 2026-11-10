/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e05b00; name: FUN_00e05b00
 */


undefined8 FUN_00e05b00(void)

{
  int *piVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_350;
  undefined1 auStack_348 [696];
  undefined1 auStack_90 [8];
  char *local_88;
  long local_78;
  long local_70 [2];
  
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  puVar4 = *(uint **)(*(long *)(lVar7 + 0x198) + 400);
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar6 == 0)) {
    puVar4 = (uint *)0x0;
    uVar2 = uRam0000000000000000;
  }
  else {
    puVar4 = (uint *)((long)piVar1 + uVar6);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    uVar2 = *puVar4;
  }
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        piVar1 = (int *)((long)(puVar4 + uVar6 + 1) + (ulong)puVar4[uVar6 + 1]);
        if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
           (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 != 0)) break;
        local_70[0] = 0;
LAB_00e05c3c:
        uVar6 = uVar6 + 1;
        if (*puVar4 <= uVar6) goto joined_r0x00e05b94;
      }
      local_70[0] = *(long *)((long)piVar1 + uVar5);
      if (local_70[0] == -0x340d631b7bddd9bb || local_70[0] == 0) goto LAB_00e05c3c;
      if (*(long *)(lVar7 + 0x688) == 0) {
        puVar3 = (ulong *)FUN_01028290();
        local_350 = *puVar3;
        if (local_350 != 0) {
          (**(code **)(*(long *)(local_350 + 0x48) + 0x10))();
        }
      }
      else {
        FUN_006e7120(&local_350,*(long *)(lVar7 + 0x688),local_70);
      }
      FUN_006cf0c0(auStack_90,&local_350);
      if (local_350 != 0) {
        (**(code **)(*(long *)(local_350 + 0x48) + 0x18))();
        local_350 = 0;
      }
      if (*local_88 != '\0') {
        local_350 = local_350 & 0xffffffffffffff00;
                    /* WARNING: Subroutine does not return */
        memset(auStack_348,0,0x2b2);
      }
      if (local_78 == 0) goto LAB_00e05c3c;
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar4);
  }
joined_r0x00e05b94:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return 0;
}


