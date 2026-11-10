/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014cce20; name: FUN_014cce20
 */


undefined8 FUN_014cce20(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  
  puVar2 = PTR_DAT_02710860;
  if (*(int *)(param_1 + 0x78) == 2) {
LAB_014cce48:
    uVar3 = 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 200);
    if ((((((lVar4 != 0) && (*(char *)(lVar4 + 0x170) != '\0')) && (*(long *)(param_1 + 0x1d8) != 0)
          ) && ((*(char *)(*(long *)(param_1 + 0x1d8) + 0x170) != '\0' &&
                (*(long *)(param_1 + 0x328) != 0)))) &&
        (((((((*(char *)(*(long *)(param_1 + 0x328) + 0x170) != '\0' &&
              ((*(long *)(param_1 + 0x438) != 0 &&
               (*(char *)(*(long *)(param_1 + 0x438) + 0x170) != '\0')))) &&
             (*(long *)(param_1 + 0x588) != 0)) &&
            (((*(char *)(*(long *)(param_1 + 0x588) + 0x170) != '\0' &&
              (*(long *)(param_1 + 0x698) != 0)) &&
             (*(char *)(*(long *)(param_1 + 0x698) + 0x170) != '\0')))) &&
           ((((*(long *)(param_1 + 0x7e8) != 0 &&
              (*(char *)(*(long *)(param_1 + 0x7e8) + 0x170) != '\0')) &&
             ((*(long *)(param_1 + 0x8f8) != 0 &&
              ((*(char *)(*(long *)(param_1 + 0x8f8) + 0x170) != '\0' &&
               (*(long *)(param_1 + 0xa48) != 0)))))) &&
            (*(char *)(*(long *)(param_1 + 0xa48) + 0x170) != '\0')))) &&
          ((((*(long *)(param_1 + 0xb58) != 0 &&
             (*(char *)(*(long *)(param_1 + 0xb58) + 0x170) != '\0')) &&
            (*(long *)(param_1 + 0xca8) != 0)) &&
           ((*(char *)(*(long *)(param_1 + 0xca8) + 0x170) != '\0' &&
            (*(long *)(param_1 + 0xdb8) != 0)))))) &&
         (((*(char *)(*(long *)(param_1 + 0xdb8) + 0x170) != '\0' &&
           ((*(long *)(param_1 + 0xf08) != 0 &&
            (*(char *)(*(long *)(param_1 + 0xf08) + 0x170) != '\0')))) &&
          (((*(long *)(param_1 + 0x1018) != 0 &&
            (((((*(char *)(*(long *)(param_1 + 0x1018) + 0x170) != '\0' &&
                (*(long *)(param_1 + 0x1168) != 0)) &&
               (*(char *)(*(long *)(param_1 + 0x1168) + 0x170) != '\0')) &&
              ((*(long *)(param_1 + 0x1278) != 0 &&
               (*(char *)(*(long *)(param_1 + 0x1278) + 0x170) != '\0')))) &&
             (*(long *)(param_1 + 0x13c8) != 0)))) &&
           (((*(char *)(*(long *)(param_1 + 0x13c8) + 0x170) != '\0' &&
             (*(long *)(param_1 + 0x14d8) != 0)) &&
            ((*(char *)(*(long *)(param_1 + 0x14d8) + 0x170) != '\0' &&
             (((*(long *)(param_1 + 0x1628) != 0 &&
               (*(char *)(*(long *)(param_1 + 0x1628) + 0x170) != '\0')) &&
              (*(long *)(param_1 + 0x1738) != 0)))))))))))))) &&
       ((((*(char *)(*(long *)(param_1 + 0x1738) + 0x170) != '\0' &&
          (*(long *)(param_1 + 0x1888) != 0)) &&
         (*(char *)(*(long *)(param_1 + 0x1888) + 0x170) != '\0')) &&
        ((((((*(long *)(param_1 + 0x1998) != 0 &&
             (*(char *)(*(long *)(param_1 + 0x1998) + 0x170) != '\0')) &&
            ((*(long *)(param_1 + 0x1ae8) != 0 &&
             (((*(char *)(*(long *)(param_1 + 0x1ae8) + 0x170) != '\0' &&
               (*(long *)(param_1 + 0x1bf8) != 0)) &&
              (*(char *)(*(long *)(param_1 + 0x1bf8) + 0x170) != '\0')))))) &&
           ((*(long *)(param_1 + 0x1d48) != 0 &&
            (*(char *)(*(long *)(param_1 + 0x1d48) + 0x170) != '\0')))) &&
          ((*(long *)(param_1 + 0x1e58) != 0 &&
           ((((*(char *)(*(long *)(param_1 + 0x1e58) + 0x170) != '\0' &&
              (*(long *)(param_1 + 0x1fa8) != 0)) &&
             ((*(char *)(*(long *)(param_1 + 0x1fa8) + 0x170) != '\0' &&
              ((((*(long *)(param_1 + 0x20b8) != 0 &&
                 (*(char *)(*(long *)(param_1 + 0x20b8) + 0x170) != '\0')) &&
                (*(long *)(param_1 + 0x2208) != 0)) &&
               ((*(char *)(*(long *)(param_1 + 0x2208) + 0x170) != '\0' &&
                (*(long *)(param_1 + 0x2318) != 0)))))))) &&
            (*(char *)(*(long *)(param_1 + 0x2318) + 0x170) != '\0')))))) &&
         (((*(long *)(param_1 + 0x2468) != 0 &&
           (*(char *)(*(long *)(param_1 + 0x2468) + 0x170) != '\0')) &&
          ((((*(long *)(param_1 + 0x2578) != 0 &&
             (((*(char *)(*(long *)(param_1 + 0x2578) + 0x170) != '\0' &&
               (*(long *)(param_1 + 0x26c8) != 0)) &&
              (*(char *)(*(long *)(param_1 + 0x26c8) + 0x170) != '\0')))) &&
            (((*(long *)(param_1 + 0x27d8) != 0 &&
              (*(char *)(*(long *)(param_1 + 0x27d8) + 0x170) != '\0')) &&
             (*(long *)(param_1 + 0x2928) != 0)))) &&
           (((*(char *)(*(long *)(param_1 + 0x2928) + 0x170) != '\0' &&
             (*(long *)(param_1 + 0x2a38) != 0)) &&
            (*(char *)(*(long *)(param_1 + 0x2a38) + 0x170) != '\0')))))))))))) {
      plVar7 = *(long **)(param_1 + 0x2b40);
      uVar3 = *(undefined8 *)(lVar4 + 400);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      puVar9 = (ulong *)(lVar4 + 0x80);
      uVar5 = *puVar9;
      if (uVar5 < 0x10) {
        uVar8 = 0;
        lVar6 = param_1 + 0x1d0;
        do {
          *(long **)(lVar4 + uVar5 * 8) = plVar7;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,0x1d0,0x10);
          if (lVar4 == 0) {
            (**(code **)(*plVar7 + 0xb8))(plVar7);
          }
          FUN_0077e290(lVar4,uVar3);
          *(long **)(lVar4 + 8) = plVar7;
          *(long *)(lVar4 + 0x10) = lVar4;
          *(undefined8 *)(lVar4 + 0x18) = 0x1d0;
          *(undefined8 *)(lVar4 + 0x20) = 0x10;
          *puVar9 = *puVar9 - 1;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          plVar7 = (long *)(lVar6 + -0x118);
          if (*plVar7 != 0) {
            (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
            *plVar7 = 0;
          }
          *plVar7 = lVar4;
          FUN_0077ea30(lVar4,lVar6);
          uVar8 = uVar8 + 1;
          if (0x11 < uVar8) {
            *(undefined4 *)(param_1 + 0x78) = 2;
            goto LAB_014cce48;
          }
          plVar1 = (long *)(lVar6 + 0x158);
          lVar6 = lVar6 + 0x260;
          plVar7 = *(long **)(param_1 + 0x2b40);
          uVar3 = *(undefined8 *)(*plVar1 + 400);
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          puVar9 = (ulong *)(lVar4 + 0x80);
          uVar5 = *puVar9;
        } while (uVar5 < 0x10);
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = 0;
  }
  return uVar3;
}


