/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01576a90; name: FUN_01576a90
 */


void FUN_01576a90(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *__dest;
  char acStack_40 [8];
  long local_38;
  
  puVar2 = (undefined8 *)PTR_PTR_02710928;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar5 = 1;
    lVar6 = *param_3;
    if (lVar6 == 0) {
      lVar7 = 0;
      goto LAB_01576ac8;
    }
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x68) + 1;
    lVar6 = *param_3;
    lVar7 = 0;
    if (lVar6 == 0) goto LAB_01576ac8;
  }
  lVar7 = *(long *)(lVar6 + 0x68);
LAB_01576ac8:
  __dest = acStack_40 + -(lVar5 + lVar7 + 0xfU & 0xfffffffffffffff0);
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x60);
  }
  strcat(__dest,(char *)*puVar1);
  if (*param_3 != 0) {
    puVar2 = (undefined8 *)(*param_3 + 0x60);
  }
  strcat(__dest,(char *)*puVar2);
  cVar3 = *__dest;
  *param_1 = 0;
  if (cVar3 == '\0') {
    lVar4 = FUN_006e5e60();
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    *param_1 = lVar4;
  }
  else {
    FUN_006cf520(&local_38,*(undefined8 *)PTR_DAT_02710440,__dest);
    *param_1 = local_38;
  }
  return;
}


