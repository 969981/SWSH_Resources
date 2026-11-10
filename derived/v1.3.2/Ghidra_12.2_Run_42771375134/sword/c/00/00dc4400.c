/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc4400; name: FUN_00dc4400
 */


undefined8 FUN_00dc4400(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  puVar5 = *(undefined8 **)(param_1 + 0x428);
  puVar6 = *(undefined8 **)(param_1 + 0x430);
  if (puVar5 == puVar6) {
    uVar3 = 0xcbf29ce484222645;
  }
  else {
    uVar3 = 0xcbf29ce484222645;
    lVar4 = -0x340d631b7bddd9bb;
    do {
      while (lVar4 != -0x340d631b7bddd9bb) {
        if (lVar4 != puVar5[1]) goto joined_r0x00dc453c;
        iVar1 = FUN_015114c0(lVar2,lVar4);
        if (iVar1 == *(int *)(puVar5 + 2)) goto LAB_00dc44f8;
LAB_00dc4500:
        puVar5 = puVar5 + 3;
        if (puVar6 == puVar5) goto joined_r0x00dc453c;
      }
      if ((puVar5[1] == -0x340d631b7bddd9bb) ||
         (iVar1 = FUN_015114c0(lVar2), iVar1 == *(int *)(puVar5 + 2))) {
LAB_00dc44f8:
        uVar3 = *puVar5;
        lVar4 = -0x340d631b7bddd9bb;
        goto LAB_00dc4500;
      }
      lVar4 = puVar5[1];
      puVar5 = puVar5 + 3;
    } while (puVar6 != puVar5);
  }
joined_r0x00dc453c:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar3;
}


